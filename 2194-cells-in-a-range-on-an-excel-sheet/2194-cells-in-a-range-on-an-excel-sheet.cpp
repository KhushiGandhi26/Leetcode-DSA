class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        char c1=s[0];
        char c2=s[3];
        int r1=int(s[1])-48;
        int r2=int(s[4])-48;
        for(char j=c1;j<=c2;j++){
            for(int i=r1;i<=r2;i++){
                string c=to_string(i);
                string a=j+c;
                ans.push_back(a);
            }
        }
        return ans;
    }
};