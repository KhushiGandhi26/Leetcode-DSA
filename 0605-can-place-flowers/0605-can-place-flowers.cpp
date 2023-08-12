class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int i;
        int ep = flowerbed.size() - 1;
        if(n == 0) return true;
        if(flowerbed.size() == 1)
        {
            if(flowerbed[0] == 0 && n <= 1) return true;
            else return false;
        }
        if(flowerbed[0] == 0 && flowerbed[1] == 0)
        {
            flowerbed[0] =1;
            count++;
        }
        if(flowerbed[ep] == 0 && flowerbed[ep - 1] == 0)
        {
            flowerbed[ep] =1;
            count++;
        }
        for(i = 1; i < ep && count < n; i++)
        {
            if(flowerbed[i] == 1) continue;
            if(flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
            {
                flowerbed[i] = 1;
                count++;
            }
        }
        return count >= n;
    }
};
