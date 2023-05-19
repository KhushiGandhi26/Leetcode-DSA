class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto e:m){
            if(e.second==2){
                ans.push_back(e.first);
            }
        }
        return ans;
    }
};