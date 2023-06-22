class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minElement=INT_MAX;
        int pro=0;
        for(int i=0;i<prices.size();i++){
            minElement=min(minElement,prices[i]);
            pro=max(pro,prices[i]-minElement);
        }
        return pro;
    }
};