class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=m;i++)dp[0][i]=0;
        for(int i=0;i<=n;i++)dp[i][0]=0;
        
        for(int i1=1;i1<=n;i1++){
            for(int i2=1;i2<=m;i2++){
                if(text1[i1-1]==text2[i2-1]) dp[i1][i2]= 1+dp[i1-1][i2-1];
                else dp[i1][i2]=max(dp[i1-1][i2],dp[i1][i2-1]);
            }
        }
        return dp[n][m];
    }
};