class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        if(nums1.size()==0 || nums2.size()==0)return ans;
        unordered_set<int> m1;
        unordered_set<int> m2;
        int i=0;
        for(i=0;i<nums1.size();i++){
            m1.insert(nums1[i]);
        }
        for(i=0;i<nums2.size();i++){
            m2.insert(nums2[i]);
        }
        vector <int> ans1;
        vector <int> ans2;
        for(auto x:m1){
            if(m2.find(x)==m2.end()) ans1.push_back(x);
        }
        for(auto x:m2){
            if(m1.find(x)==m1.end()) ans2.push_back(x);
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};