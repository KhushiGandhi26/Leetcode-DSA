class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char c;
        int n=s.length();
        bool flag=true;
        for(int i=0;i<n;i++){
            if(s[i]==t[i])continue;
            else{
                flag=false;
                return t[i];
            }
        }
        return t[n];
    }
};