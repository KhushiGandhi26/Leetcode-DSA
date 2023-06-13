class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0;
        map<vector<int>,int> m;
        for(int i=0;i<grid.size();i++){
            m[grid[i]]++;
        }
        for(int j=0;j<grid[0].size();j++){
            vector<int> arr;
            for(int i=0;i<grid.size();i++){
                arr.emplace_back(grid[i][j]);
            }
            ans+=m[arr];
        }
        return ans;
    }
};