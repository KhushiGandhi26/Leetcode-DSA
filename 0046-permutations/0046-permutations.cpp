class Solution {
public:
    void func(int n,vector<int> nums,vector<int> &ds,vector<vector<int>> &ans,int vis[]){
        if(ds.size()==n){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                ds.push_back(nums[i]);
                vis[i]=1;
                func(n,nums,ds,ans,vis);
                ds.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int vis[nums.size()];
        for(int i=0;i<nums.size();i++)vis[i]=0;
        vector<int> ds;
        func(nums.size(),nums,ds,ans,vis);
        return ans;
    }
};