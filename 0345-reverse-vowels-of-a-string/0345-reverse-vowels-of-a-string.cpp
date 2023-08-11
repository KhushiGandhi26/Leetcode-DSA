class Solution {
public:
    bool isVovel(char c){
        c=tolower(c);
        if(c=='a' || c=='e' ||c=='i' ||c=='o' ||c=='u' ){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(isVovel(s[l])==false)l++;
            else if(isVovel(s[r])==false)r--;
            else if(isVovel(s[l]) && isVovel(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};