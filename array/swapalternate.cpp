#include<iostream>
    using namespace std;
    void swapalternate(int arr[],int n){
        for(int i=0;i<n;i=i+2){
            swap(arr[i],arr[i+1]);
        }
    }
    int main(){
    int arr[6]={1,2,3,4,5,6};
    swapalternate(arr,6);
        for(int i=0;i<6;i++){
        cout<<arr[i];
    }
return 0;
}