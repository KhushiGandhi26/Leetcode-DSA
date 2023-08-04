class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int minStock=prices[0];
        for(int i=1;i<prices.size();i++){
            maxPro=max(maxPro,prices[i]-minStock);
            minStock=min(minStock,prices[i]);
        }
        return maxPro;
    }
};