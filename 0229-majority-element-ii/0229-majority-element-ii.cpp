class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int c=floor(nums.size()/3);
        int n1=INT_MIN;
        int n2=INT_MIN;
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(n1==nums[i])c1++;
            else if(n2==nums[i])c2++;
            else if(c1==0){
                n1=nums[i];
                c1=1;
            }
            else if(c2==0){
                n2=nums[i];
                c2=1;
            }
            else{c1--;c2--;}
        }
        c1 = 0, c2 = 0;
        for(auto element : nums){
            if(n1 == element){
                c1++;
            }
            if(n2 == element){
                c2++;
            }
        }
        if(c1>c)ans.push_back(n1);
        if(c2>c)ans.push_back(n2);
        return ans;
    }
};