class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeros;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    zeros.push_back({i,j});
                }
            }
        }
        for(auto e:zeros){
            for(int i=0;i<n;i++){
                matrix[i][e.second]=0;
            }
            for(int i=0;i<m;i++){
                matrix[e.first][i]=0;
            }
            // cout<<e.first<<" "<<e.second<<endl;
        }
        
    }
};