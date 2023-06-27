class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)return  n;
        int p1=1;
        int p2=0;
        for(int i=1;i<=n;i++){
            int temp=p1+p2;
            p2=p1;
            p1=temp;
        }
        return p1;
    }
};