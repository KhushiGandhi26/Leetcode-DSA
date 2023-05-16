class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans;
        for(int i=0;i<details.size();i++){
            string age=details[i].substr(11,2);
            stringstream s;
            s<<age;
            int a=0;
            s>>a;
            if(a>60)ans++;
        }
        return ans;
    }
};