class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        map<int,vector<int>> m;
        for(int i=0;i<groupSizes.size();i++){
            m[groupSizes[i]].push_back(i);
        }
        for(auto e:m){
            int siz=e.first;
            vector<int> arr=e.second;
            int count=0;
            vector<int>a;
            for(int i=0;i<arr.size();i++){
                a.push_back(arr[i]);
                if(a.size()==siz){
                    ans.push_back(a);
                    count=0;
                    a.clear();
                }
            }
        }
        return ans;
    }
};