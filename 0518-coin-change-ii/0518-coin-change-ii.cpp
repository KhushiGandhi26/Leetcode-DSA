class Solution {
public:
    int func(int i,vector<int>& coins,int a,vector<vector<int>> &dp){
        if(a==0)return 1;
        if(i==coins.size()){
            return 0;
        }
        if(dp[i][a]!=-1)return dp[i][a];
        int pick=0;
        if(coins[i]<=a) pick=func(i,coins,a-coins[i],dp);
        int notPick=func(i+1,coins,a,dp);
        return dp[i][a]=pick+notPick;
    }
    
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        return func(0,coins,amount,dp);
    }
};