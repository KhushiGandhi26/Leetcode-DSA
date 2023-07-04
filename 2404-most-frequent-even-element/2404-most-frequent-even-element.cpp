class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)m[nums[i]]++;
        }
        int ele=INT_MIN;
        int freq=INT_MIN;
        if(m.size()==0)return -1;
        for(auto e:m){
            if(e.second>freq){
                freq=e.second;
                ele=e.first;
            }
            if(e.second==freq){
                if(e.first<ele){
                    ele=e.first;
                    freq=e.second;
                }
            }
        }
        return ele;
    }
};