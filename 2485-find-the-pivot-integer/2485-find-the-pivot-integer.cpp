class Solution {
public:
    int pivotInteger(int n) {
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            arr[i]=sum;
        }
        if(n==1) return 1;
        for(int i=1;i<n-1;i++){
            if(arr[i-1]==(arr[n-1]-arr[i])) return i+1;
        }
        return -1;
    }
};