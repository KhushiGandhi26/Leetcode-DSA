class Solution {
public:
    void func(int i,int n,vector<vector<int>> &ans,vector<int>& nums,vector<int> &ds){
        if(i==n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        func(i+1,n,ans,nums,ds);
        ds.pop_back();
        func(i+1,n,ans,nums,ds);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        func(0,nums.size(),ans,nums,ds);
        return ans;
    }
};