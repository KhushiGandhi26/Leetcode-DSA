class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s=0;
        int e=n;
        vector <int> res;
        while(s<n and e<2*n){
            res.push_back(nums[s]);
            res.push_back(nums[e]);
            s++;
            e++;
        }
        return res;
    }
};