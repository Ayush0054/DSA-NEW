#include<bits/stdc++.h>
    using namespace std;
    void selectionsort(int arr[],int n){
         if(n==0 || n==1 ){
            return;
         }

         //least no
         int min = 0;
         for(int i=1;i<n;i++){
            if(arr[min]>arr[i]){
                min=i;
            }
         }
            // cout<<min<<endl;
        //  cout<<"hehe";
         
            swap(arr[0],arr[min]);  
            
         selectionsort(arr+1,n-1);
         
    }
    int main(){
    int arr[5]={4,5,6,7,2};
    selectionsort(arr,5);
        for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}