class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res=0;
        if(jewels=="")return res;
        unordered_map <char,int> map;
        for(int i=0;i<stones.size();i++){
            map[stones[i]]++;
        }
        for(int i=0;i<jewels.size();i++){
            if(map.find(jewels[i])!=map.end()){
                res+=map[jewels[i]];
            }
        }
        return res;
    }
};