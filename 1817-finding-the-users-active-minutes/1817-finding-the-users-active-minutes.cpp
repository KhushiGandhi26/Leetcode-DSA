class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>num(k,0);
        unordered_set<int>ind_arr;
        int n=logs.size();
        for(int i=0;i<n;i++){
            ind_arr.insert(logs[i][0]);
        }
        for(auto i:ind_arr){
            unordered_set<int>kk;
            for(int j=0;j<n;j++){
                if(logs[j][0]==i){
                    kk.insert(logs[j][1]);
                }
            }
            int p=kk.size();
            if(p>0){
                num[p-1]++;
            }
        }
        return num;
    }
};