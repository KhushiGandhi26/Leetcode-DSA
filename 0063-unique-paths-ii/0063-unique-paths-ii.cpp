class Solution {
public:
    int func(int i,int j,vector<vector<int>> grid,int m,int n,vector<vector<int>> &dp){
        if(i==m-1 && j==n-1 && grid[i][j]==0 )return 1;
        if(i>=m || j>=n || grid[i][j] == 1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int down=0;
        int right=0;
        if(i+1<m)down=func(i+1,j,grid,m,n,dp);
        if(j+1<n) right=func(i,j+1,grid,m,n,dp);
        return dp[i][j]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return func(0,0,obstacleGrid,m,n,dp);
    }
};