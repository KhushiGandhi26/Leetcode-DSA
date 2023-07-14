class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int tot=0;
        int n=nums.size();
        int s=(n*(n+1))/2;
        for(int i=0;i<n;i++)tot+=nums[i];
        return s-tot;
    }
};