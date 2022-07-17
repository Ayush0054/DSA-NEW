#include<iostream>
    using namespace std;
    void bubblesort(int arr[],int n){
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++){
              if(arr[j]>arr[j+1]){
                  swap(arr[j],arr[j+1]);
              }
            }
    }
    }
    int main(){

     int arr[6]={5,43,3,1,6,2};
     bubblesort(arr,6);
     for(int i=0;i<6;i++){
         cout <<" "<<arr[i];
    }
return 0;
}