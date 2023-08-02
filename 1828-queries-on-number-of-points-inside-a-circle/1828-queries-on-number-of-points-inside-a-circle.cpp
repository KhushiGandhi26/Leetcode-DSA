class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int x1=queries[i][0];
            int y1=queries[i][1];
            int r=queries[i][2];
            int a=0;
            for(int k=0;k<points.size();k++){
                int x=points[k][0];
                int y=points[k][1];
                if(pow((x-x1),2)+pow((y-y1),2)<=pow(r,2))a++;
            }
            ans.push_back(a);
        }
        return ans;
    }
};