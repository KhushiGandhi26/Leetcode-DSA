class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string w1=strs[0];
        string w2=strs[strs.size()-1];
        int i1=0,i2=0;
        while(i1<w1.length() && i2<w2.length()){
            if(w1[i1]!=w2[i2])break;
            else{
                i1++;
                i2++;
            }
        }
        string ans="";
        if(i1==0){
            if(w1[0]==w2[0])ans=w1[0];
        }
        ans=w1.substr(0,i1);
        return ans;
    }
};