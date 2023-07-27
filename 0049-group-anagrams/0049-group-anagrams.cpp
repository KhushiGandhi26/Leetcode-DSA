class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> s;
        for(int i=0;i<strs.size();i++){
            string t=strs[i];
            sort(t.begin(),t.end());
            if(s.find(t)!=s.end()){
                s[t].push_back(strs[i]);
            }
            else{
                vector<string> a;
                a.push_back(strs[i]);
                s.insert({t,a});
            }
        }
        vector<vector<string>> ans;
        for(auto e:s){
            ans.push_back(e.second);
        }
        return ans;
    }
};