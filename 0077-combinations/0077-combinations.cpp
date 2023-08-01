class Solution {
public:
    void func(int ind,vector<int> &ds,int &k,int &n,vector<vector<int>>&res){
        if(ds.size()==k){
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<=n;i++){
            ds.push_back(i);
            func(i+1,ds,k,n,res);
            ds.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> ds;
        vector<vector<int>>res;
        func(1,ds,k,n,res);
        return res;
    }
};