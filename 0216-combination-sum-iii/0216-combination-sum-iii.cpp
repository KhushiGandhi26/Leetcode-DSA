class Solution {
public:
    void func(int i,int k,int n,vector<int> &ds,vector<vector<int>> &ans,int sum){
        if(ds.size()<k && sum==n)return;
        if(ds.size()==k){
            if(sum==n){
                ans.push_back(ds);
            }
            return;
        }
        if(i>9)return;
        ds.push_back(i);
        sum+=i;
        func(i+1,k,n,ds,ans,sum);
        ds.pop_back();
        sum-=i;
        func(i+1,k,n,ds,ans,sum);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        func(1,k,n,ds,ans,0);
        return ans;
    }
};