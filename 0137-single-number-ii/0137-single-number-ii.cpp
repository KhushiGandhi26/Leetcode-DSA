class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto e:m){
            if(e.second==1){
                return e.first;
            }
        }
        return -1;
    }
};