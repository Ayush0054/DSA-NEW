#include<bits/stdc++.h>
    using namespace std;
    void isort(int arr[],int n){
        if(n==0 || n==1){
            return ;
        }
         isort(arr+1,n-1);
         int idx=0;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[idx]){
            swap(arr[i],arr[idx]);
            idx=i;
            }
        else{
            break;
        }
        }
    }
    int main(){
    int arr[5]={5,3,4,2,1};
    isort(arr,5);
    for(int i =0;i<5;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}