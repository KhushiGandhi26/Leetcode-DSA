class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector <int> leftMin;
        vector <int> rightMin;
        stack <pair<int,int>> ls;
        stack <pair<int,int>> rs;
        for(int i=0;i<heights.size();i++){
            if(ls.size()==0){
                leftMin.push_back(-1);
            }
            else if(ls.size()>0 && ls.top().first<heights[i]){
                leftMin.push_back(ls.top().second);
            }
            else if(ls.size()>0 && ls.top().first>=heights[i]){
                while(ls.size()>0 && ls.top().first>=heights[i]){
                    ls.pop();
                }
                if(ls.size()==0){
                    leftMin.push_back(-1);
                }
                else{
                    leftMin.push_back(ls.top().second);
                }
            }
            ls.push({heights[i],i});
        } 
        for(int i=heights.size()-1;i>=0;i--){
            if(rs.size()==0){
                rightMin.push_back(heights.size());
            }
            else if(rs.size()>0 && rs.top().first<heights[i]){
                rightMin.push_back(rs.top().second);
            }
            else if(rs.size()>0 && rs.top().first>=heights[i]){
                while(rs.size()>0 && rs.top().first>=heights[i]){
                    rs.pop();
                }
                if(rs.size()==0){
                    rightMin.push_back(heights.size());
                }
                else{
                    rightMin.push_back(rs.top().second);
                }
            }
            rs.push({heights[i],i});
        }
        reverse(rightMin.begin(), rightMin.end());
        int maxArea=INT_MIN;
        for(int i=0;i<heights.size();i++){
            maxArea=max(maxArea,heights[i]*(rightMin[i]-leftMin[i]-1));
        }
        return maxArea;

    }
};