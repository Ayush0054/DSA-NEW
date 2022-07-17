#include<iostream>
    using namespace std;

   void sort012(int arr[],int n){
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(arr[mid]==0 && mid<=high){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            if(arr[mid]==1 && mid<=high){
                mid++;
            }
            if(arr[mid]==2 && mid<=high){
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
    int main(){
    int arr[6]={1,2,0,0,1,2};
    sort012(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
return 0;
}