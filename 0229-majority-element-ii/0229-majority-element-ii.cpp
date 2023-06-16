class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int check=floor(nums.size()/3);
        for(auto e:m){
            if(e.second>check){
                ans.push_back(e.first);
            }
        }
        return ans;
    }
};