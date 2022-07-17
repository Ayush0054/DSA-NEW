#include<bits/stdc++.h>
    using namespace std;
    bool subset(int arr[],int n,int sum){
        if(sum==0){
            return 1;
        }
        if(sum=!0 && n==0){
            return 0;
        }
        if(sum<0){
            return 0;
        }
        if(arr[n-1]>sum){
            return subset(arr,n-1,sum);
        }
        return subset(arr,n-1,sum) || subset(arr,n-1,sum-arr[n-1]);
       
    }
    int main(){
    int arr[6]={3,34,4,12,5,2};
    int sum = 9;
    cout<<subset(arr,6,9);
return 0;
}