#include<bits/stdc++.h>
    using namespace std;
    int maximum(int arr[],int n){
         if(n<=1){
             return arr[0];
         }
          return max(arr[0],maximum(arr+1,n-1));
    }
    int main(){
    int arr[5]={1,2,7,4,5};
    cout<<maximum(arr,5);
return 0;
}