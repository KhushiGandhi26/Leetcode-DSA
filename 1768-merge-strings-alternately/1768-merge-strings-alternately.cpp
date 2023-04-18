class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n=word1.length();
        int m=word2.length();
        for(int i=0;i<min(n,m);i++){
            ans+=word1[i];
            ans+=word2[i];
        }
        if(n>m){
            for(int i=m;i<n;i++){
                ans+=word1[i];
            }
        }
        else if(m>n){
            for(int i=n;i<m;i++){
                ans+=word2[i];
            }
        }
        return ans;
    }
};