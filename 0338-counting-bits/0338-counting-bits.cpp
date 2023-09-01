class Solution {
public:
    int count1(int n){
        int c=0;
        while(n!=0){
            int dig=n%2;
            if(dig==1)c++;
            n=n/2;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(count1(i));
        }
        return ans;
    }
};