class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        set<int> s;
        for(int i=0;i<A.size();i++){
            s.insert(A[i]);
            int count=0;
            for(int j=0;j<=i;j++){
                if(s.find(B[j])!=s.end()){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};