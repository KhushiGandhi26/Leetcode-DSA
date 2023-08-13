class Solution {
public:
    bool func(int i,vector<int>& nums,int n,vector<int> &dp){
        if(i==n)return true;
        bool res=false;
        if(dp[i]!=-1)return dp[i];
        if(i+1<n && nums[i]==nums[i+1]){
            res=func(i+2,nums,n,dp);
            if(i+2<n && nums[i]==nums[i+2]){
                res=res||func(i+3,nums,n,dp);
            }
        }
        if(i+2<n && nums[i+1]-nums[i]==1 && nums[i+2]-nums[i+1]==1){
            res=res||func(i+3,nums,n,dp);
        }
        return dp[i]=res;
    }
    bool validPartition(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return func(0,nums,nums.size(),dp);
    }
};