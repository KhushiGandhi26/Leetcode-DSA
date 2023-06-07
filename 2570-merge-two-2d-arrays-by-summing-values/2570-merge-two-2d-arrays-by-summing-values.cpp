class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int n1=nums1.size();
        int n2=nums2.size();
        int n=min(n1,n2);
        int i1=0,i2=0;
        while(i1!=n1 && i2!=n2){
            if(nums1[i1][0]>nums2[i2][0]){
                ans.push_back(nums2[i2]);
                i2++;
            }
            else if(nums1[i1][0]<nums2[i2][0]){
                ans.push_back(nums1[i1]);
                i1++;
            }
            else if(nums1[i1][0]==nums2[i2][0]){
                ans.push_back({nums1[i1][0],(nums2[i2][1]+nums1[i1][1])});
                i2++;
                i1++;
            }
        }
        if(i1!=n1){
            while(i1!=n1){
                ans.push_back(nums1[i1]);
                i1++;
            }
        }
        else if(i2!=n2){
            while(i2!=n2){
                ans.push_back(nums2[i2]);
                i2++;
            }
        }
       
        return ans;
    }
};