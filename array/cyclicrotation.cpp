#include<iostream>
    using namespace std;
    void cyclic(int arr[],int n){

        //  int temp = arr[n-1];
        // for (int i = n-1; i >= 1 ; i--){     //approach1
        //     arr[i] = arr[i-1];
        // }
        // arr[0]= temp;


        int low=0;
        int high=n-1;
     while(low != high+1){
   swap(arr[low],arr[high]);
     low++;
     }
    }
    int main(){
    int arr[5]={1,2,3,4,5};
    cyclic(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}