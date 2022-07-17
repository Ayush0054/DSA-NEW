#include<bits/stdc++.h>
    using namespace std;
    int sume(int arr[],int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return arr[0];
        }
        return arr[0] + sume(arr+1,n-1);
    }
    int main(){
    int arr[6]={5,5,5,10,10,5};
    cout<<sume(arr,6);
return 0;
}