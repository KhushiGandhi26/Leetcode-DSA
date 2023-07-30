class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int i1=0,i2=0;
        while(i1!=word1.length() && i2!=word2.length()){
            ans+=word1[i1];
            ans+=word2[i2];
            i1++;
            i2++;
        }
        while(i1!=word1.length()){
            ans+=word1[i1];
            i1++;
        }
        while(i2!=word2.length()){
            ans+=word2[i2];
            i2++;
        }
        return ans;
    }
};