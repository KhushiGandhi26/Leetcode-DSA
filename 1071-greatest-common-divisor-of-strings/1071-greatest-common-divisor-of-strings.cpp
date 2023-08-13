class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string small="";
        if(str1.length()<str2.length()){
            small=str1;
        }
        else{
            small=str2;
        }
        for(int i=small.length();i>0;i--){
            string a=small.substr(0,i);
            if(str1.length()%a.length()==0 && str2.length()%a.length()==0){
                int n1=str1.length()/a.length();
                int n2=str2.length()/a.length();
                string t1="",t2="";
                for(int i=0;i<n1;i++){
                    t1+=a;
                }
                for(int i=0;i<n2;i++){
                    t2+=a;
                }
                if(t1==str1 && t2==str2)return a;
            }
        }
        return "";
    }
};