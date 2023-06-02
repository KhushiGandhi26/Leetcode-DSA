class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        int temp=n;
        int dig=0;
        int count=0;
        while(n!=0){
            count++;
            n=n/10;
        }
        for(int i=count-1;i>=0;i--){
            dig=pow(-1,i)*(temp%10);
            sum=sum+dig;
            // cout<<"dig="<<dig<<" Sum="<<sum<<"Temp="<<temp<<endl;
            temp=temp/10;
        }
        return sum;
    }
};