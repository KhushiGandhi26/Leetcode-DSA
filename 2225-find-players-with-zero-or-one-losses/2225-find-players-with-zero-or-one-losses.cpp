class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans;
        unordered_map<int,int> win;
        unordered_map<int,int> lost;
        for(int i=0;i<matches.size();i++){
            win[matches[i][0]]++;
        }
        for(int i=0;i<matches.size();i++){
            lost[matches[i][1]]++;
        }
        vector<int> a;
        for(auto e:win){
            if(lost.find(e.first)==lost.end()){
                a.push_back(e.first);   
            }
        }
        ans.push_back(a);
        vector<int> b;
        for(auto e:lost){
            if(e.second==1){
                b.push_back(e.first);   
            }
        }
        ans.push_back(b);
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};