#include<iostream>
    using namespace std;
    void selectionsort(int arr[],int n){
      
        for(int i=0;i<n-1;i++){
           int min =i;
            for(int j=i+1;j<n;j++){
                if(arr[j] < arr[min]){
                    min =j;
                }
            }
                   swap(arr[i],arr[min]);
        }
    }
    int main(){
    int arr[6]={5,43,3,1,6,2};
    // for(int i=0;i<6;i++){
    //     cout <<" "<<arr[i];
    // }
    selectionsort(arr,6);
    for(int i=0;i<6;i++){
        cout <<" "<<arr[i];
    }
return 0;
}