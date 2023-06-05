class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_set <char> letters;
        for(int i=0;i<s.length();i++){
            letters.insert(s[i]);
        }
        char c='a';
        for(int i=0;i<26;i++){
            if(letters.find(c)==letters.end()){
                cout<<c;
                return false;
            }
            c=c+1;
        }
        return true;
    }
};