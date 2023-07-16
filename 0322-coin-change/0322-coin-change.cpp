class Solution {
public:
    int func(int ind,int tar,vector<int> &coins,vector<vector<int>>&dp){
        if(ind==0){
            if(tar%coins[0]==0)return tar/coins[0];
            return 1e9;
        }
        if(dp[ind][tar]!=-1)return dp[ind][tar];
        int notTake=0+func(ind-1,tar,coins,dp);
        int take=1e9;
        if(coins[ind]<=tar)take=1+func(ind,tar-coins[ind],coins,dp);
        return dp[ind][tar]=min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans=func(n-1,amount,coins,dp);
        if(ans>=1e9)return -1;
        return ans;
    }
};