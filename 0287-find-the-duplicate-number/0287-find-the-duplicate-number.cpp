class Solution {
public:
//     Solution uses O(n) space
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        int ans;
        for(int i=0;i<nums.size();i++){\
            if(m.find(nums[i])!=m.end()){
                ans=nums[i];
            }
            m.insert(nums[i]);
        }
        return ans;
    }
};