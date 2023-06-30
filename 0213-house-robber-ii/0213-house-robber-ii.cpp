class Solution {
public:
    int rob_(vector<int>& nums) {
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
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int> temp1;
        vector<int> temp2;
        for(int i=0;i<n-1;i++){
            temp1.push_back(nums[i]);
        }
        for(int i=1;i<n;i++){
            temp2.push_back(nums[i]);
        }
        return max(rob_(temp1),rob_(temp2));
    }
};