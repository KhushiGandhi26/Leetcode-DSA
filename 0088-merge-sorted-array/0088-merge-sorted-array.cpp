class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=m-1;
        int n2=n-1;
        int i=nums1.size()-1;
        while(n2>=0){
            if(n1>=0 && nums1[n1]>nums2[n2]){
                nums1[i]=nums1[n1];
                n1-=1;
            }
            else{
                nums1[i]=nums2[n2];
                n2-=1;
            }
            i-=1;
        }
    }
};