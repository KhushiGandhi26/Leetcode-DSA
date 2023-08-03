class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(int i=0;i<n.length();i++){
            if(n[i]=='9'){
                ans=9;
                break;
            }
            else ans=max(ans,n[i]-'0');
        }
        return ans;
    }
};