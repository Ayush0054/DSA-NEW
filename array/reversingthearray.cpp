#include<iostream>
    using namespace std;
    void reverse(int arr[],int n){
       int start=0;
       int end=n-1;
       while(start <=end){
           swap(arr[start],arr[end]);
           start++;
           end--;
           }
       }
    int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i];
    }
return 0;
}