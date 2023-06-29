class Solution {
public:
    int func(int i,vector<int> &nums,vector<int> &dp){
        if(i==0)return nums[i];
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int pick=nums[i]+func(i-2,nums,dp);
        int notpick=func(i-1,nums,dp);
        return dp[i]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return func(nums.size()-1,nums,dp);
    }
};