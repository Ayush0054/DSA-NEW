#include<bits/stdc++.h>
    using namespace std;
    void bsort(int arr[],int n){
        if(n==0 || n==1){
            return ;
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        }
         bsort(arr,n-1);
    }
    int main(){
    int arr[5]={5,7,4,2,1};
    bsort(arr,5);
    for(int i =0;i<5;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}