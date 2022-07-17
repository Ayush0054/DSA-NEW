#include<bits/stdc++.h>
    using namespace std;
    int profit(int arr[],int n){
        int mini = arr[0];
        int maxi = 0;
        int profit =0;
        for(int i=0;i<n;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
            
              else  if(arr[i]-mini > profit){
                    profit = arr[i] - mini;
                }
            
        }
        return profit;
    }
    int main(){
    int arr[6]={7,1,5,3,6,4};
       cout<<profit(arr,6);
return 0;
}