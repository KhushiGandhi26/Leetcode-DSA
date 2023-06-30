class Solution {
public:
    int rob(vector<int>& nums) {
        int prev=nums[0];
        int prev2=0;
        int curr;
        for(int i=1;i<nums.size();i++){
            int take=nums[i];
            if(i>1)take+=prev2;
            int nonTake=prev;
            curr=max(take,nonTake);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};