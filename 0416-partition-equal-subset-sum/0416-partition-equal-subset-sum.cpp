class Solution {
public:
    bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n,vector<bool>(k+1,0));
    if(arr[0]<=k)dp[0][arr[0]]=true;
    for(int i=0;i<n;i++)dp[i][0]=true;
    for(int ind=1;ind<n;ind++){
        for(int tar=1;tar<=k;tar++){
            bool notTake=dp[ind-1][tar];
            bool take=false;
            if(arr[ind]<=tar)take=dp[ind-1][tar-arr[ind]];
            dp[ind][tar]=take|notTake;
        }
    }
    return dp[n-1][k];
}
    bool canPartition(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        if(total%2!=0)return false;
        return subsetSumToK(nums.size(),total/2,nums);
    }
};