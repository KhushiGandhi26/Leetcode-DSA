class Solution {
public:
    bool isPal(int a,int b,string s){
        while(a<=b){
            if(s[a]!=s[b])return false;
            a++;
            b--;
        }
        return true;
    }
    void palPar(string s,int p,vector<string> &par,vector<vector<string>> &ans){
        if(p==s.length()){
            ans.push_back(par);
            return;
        }
        for(int i=p;i<s.length();i++){
            if(isPal(p,i,s)==true){
                par.push_back(s.substr(p,i-p+1));
                palPar(s,i+1,par,ans);
                par.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> par;
        palPar(s,0,par,ans);
        return ans;
    }
};