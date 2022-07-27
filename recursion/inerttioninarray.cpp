#include<bits/stdc++.h>
    using namespace std;
    void insertion(int arr[],int n,int item,int pos){
     for(int i=n;i>=pos;i--){
       arr[i+1] =arr[i];
     }
     arr[pos]= item;
     n++;
    }
    int main(){
    int arr[5]={1,2,3,4,5};
    insertion(arr,5,50,3);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}