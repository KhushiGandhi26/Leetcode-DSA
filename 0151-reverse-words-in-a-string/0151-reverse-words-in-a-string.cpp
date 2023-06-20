class Solution {
public:
    
    string reverseWords(string s) {
        string temp="";
        stack<string> st;
        for(char c:s){
            if(c==' '){
                if(temp.length()>0){
                    st.push(temp);
                    temp="";
                }
            }
            else{
                temp+=c;
            }
        }
        st.push(temp);
        s="";
        while(!st.empty()){
            s=s+" "+st.top();
            st.pop();
        }
        int i=0;
        while(i<s.length()){
            if(s.length()!=0 && s[i]==' '){
                s=s.substr(i+1);
            }
            else{
                break;
            }
        }
        
        return s;
    }
};