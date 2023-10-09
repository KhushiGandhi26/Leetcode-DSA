class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int mid=-1;
        bool flag=false;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]==target){
                flag=true;
                break;
            }
            else if(nums[mid]>target)r=mid-1;
            else l=mid+1;
        }
        if(!flag)return {-1,-1};
        l=mid;r=mid;
        while(l>0){
            if(nums[l-1]==target)l--;
            else break;
        }
        while(r<nums.size()-1){
            if(nums[r+1]==target)r++;
            else break;
        }
        return {l,r};
    }
};