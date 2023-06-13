class Solution {
public:
    void combination(int i,vector<int> &arr, int target,vector<vector<int>> &ans,vector<int> ds){
        if(i==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[i]<=target){
            ds.push_back(arr[i]);
            combination(i,arr,target-arr[i],ans,ds);
            ds.pop_back();
        }
        combination(i+1,arr,target,ans,ds);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        combination(0,candidates,target,ans,ds);
        return ans;
    }
};