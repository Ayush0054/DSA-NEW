#include<bits/stdc++.h>
    using namespace std;
    int partition(int arr[],int l ,int h){
       
        int i=l;
        int j=h;
        int pivot =arr[l];
        while(i<j){
            while(arr[i]<= pivot){
                i++;

            }
            while(arr[j] > pivot){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[l],arr[j]);
        return j;
    }
    void quicksort(int arr[],int l,int h){
      if(l<h){
        int j=partition(arr,l,h);
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
      }
    }
    int main(){
    int arr[]={9,4,9,2,11,0,3};
        int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}