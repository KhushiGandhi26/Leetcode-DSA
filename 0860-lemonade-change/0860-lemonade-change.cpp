class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5)five+=1;
            else if(bills[i]==10){
                    five-=1;
                    ten+=1;
            }
            else if(bills[i]==20){
                if(ten>0){
                    ten-=1;
                    five-=1;
                }
                else{
                    five-=3;
                }
            }
            if(five<0)return false;
        }
        return true;
    }
};