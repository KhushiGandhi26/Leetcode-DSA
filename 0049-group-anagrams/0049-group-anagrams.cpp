class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> s;
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            s[word].push_back(x);
        }
        vector<vector<string>> ans;
        for(auto e:s){
            ans.push_back(e.second);
        }
        return ans;
    }
};