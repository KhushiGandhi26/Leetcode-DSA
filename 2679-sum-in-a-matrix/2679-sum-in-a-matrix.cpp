class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sort(nums[i].begin(),nums[i].end());
        }
        for(int j=0;j<nums[0].size();j++){
            int m=0;
            for(int i=0;i<nums.size();i++){
                m=max(m,nums[i][j]);
            }
            sum+=m;
        }
        return sum;
    }
};