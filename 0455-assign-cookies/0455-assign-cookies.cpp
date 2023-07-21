class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gp=0;
        int sp=0;
        while(gp!=g.size() && sp!=s.size()){
            if(s[sp]>=g[gp]){
                ans+=1;
                gp+=1;
                sp+=1;
            }
            else{
                sp+=1;
            }
        }
        return ans;
    }
};