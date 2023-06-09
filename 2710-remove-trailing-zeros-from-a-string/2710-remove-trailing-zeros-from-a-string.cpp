class Solution {
public:
    string removeTrailingZeros(string num) {
        int a=num.size()-1;
        for(int i=num.length()-1;i>=0;i--){
            if(num[i]=='0'){
                continue;
            }
            else{
                a=i;
                break;
            }
        }
        if(a<0)return "";
        return num.substr(0,a+1);
    }
};