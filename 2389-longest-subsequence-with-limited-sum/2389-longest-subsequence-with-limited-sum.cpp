class Solution {
public:
    vector<int> answerQueries(vector<int>& arr, vector<int>& query) {
        // incase of subsequnce Always remeber you can sort no need of order
        sort(arr.begin(),arr.end());
        vector<int>v;
        for(auto q:query){
            int sum=0,c=0;
            for(int i=0;i<arr.size();i++){
                sum+=arr[i];
                if(sum<=q)c++;
            }
            v.push_back(c);
        }
        return v;
}
};