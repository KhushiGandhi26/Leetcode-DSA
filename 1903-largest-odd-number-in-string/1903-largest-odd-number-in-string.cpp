class Solution {
public:
    string largestOddNumber(string num) {
        int s=-1;
        for(int i=num.length()-1;i>=0;i--){
            char c=num[i];
            if(c%2!=0){
                s=i;
                break;
            }
        }
        if(s==-1)return "";
        return num.substr(0,s+1);
    }
};