class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        if(chars.size()==1)return 1;
        for(int i=0;i<chars.size();i++){
            int c=1;
            while(i+1<chars.size() && chars[i]==chars[i+1]){
                c++;
                i+=1;
            }
            if(c!=1){
                ans+=chars[i];
                string a=to_string(c);
                ans+=a;
            }
            else{
                ans+=chars[i];
            }
        }
        for(int i=0;i<ans.length();i++){
            chars[i]=ans[i];
        }
        return ans.length();
    }
};