class Solution {
public:
    bool isKSetBits(int n,int k){
        int bits=0;
        while(n!=0){
            if(n%2==1){
                bits++;
            }
            n=n/2;
            if(bits>k)return false;
        }
        return (k==bits);
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(isKSetBits(i,k)){
                ans+=nums[i];
            }
        }
        return ans;
    }
};