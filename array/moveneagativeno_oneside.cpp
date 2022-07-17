#include<iostream>
    using namespace std;
    void movenegative(int arr[],int n){
        int low=0;
        int high=n-1;
        while(low<high){
     if(arr[low]>=0 && arr[high]<0 && low<high){
         swap(arr[low],arr[high]);     
         low++;
         high--;
     }
      if(arr[low]<0 && arr[high]>=0 && low<high){
         low++;                    
         high--;
     }
      if(arr[low]>=0 && arr[high]>=0 && low<high){
         high--;
         swap(arr[low],arr[high]);
     }
      if(arr[low]<0 && arr[high]<0 && low<high){
         low++;
         swap(arr[low],arr[high]);
     }
        }
    }
    int main(){
        int arr[6]={-1,2,-4,3,5,6};
    movenegative(arr,6);
        for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}