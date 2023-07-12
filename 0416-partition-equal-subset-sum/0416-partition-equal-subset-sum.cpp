class Solution {
public:
    bool func(int i, int k, vector<int> &arr,vector<vector<int>> &dp) {
        if(k==0)return true;
        if(i==0)return (k==arr[0]);
        if(dp[i][k]!=-1)return dp[i][k];
        int notTake=func(i-1,k,arr,dp);
        int take=false;
        if(k>=arr[i])take=func(i-1,k-arr[i],arr,dp);
        return dp[i][k]=take||notTake;
}
    bool canPartition(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        if(total%2!=0)return false;
        vector<vector<int>> dp(nums.size(),vector<int>((total/2)+1,-1));
        return func(nums.size()-1,total/2,nums,dp);
    }
};