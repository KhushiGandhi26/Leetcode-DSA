class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)return false;
        int n=nums.size();
        vector<int> lmin(n);
        vector<int> rmax(n);
        lmin[0] = nums[0];
        for(int i=1;i<n;i++)lmin[i] = min(lmin[i-1], nums[i]);
        rmax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)rmax[i]=max(rmax[i+1],nums[i]);
        for(int i=1;i<n-1;i++){
            if(lmin[i-1]<nums[i] && nums[i]<rmax[i+1])return true;
        }
        return false;
    }
};