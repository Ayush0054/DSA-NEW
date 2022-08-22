#include<bits/stdc++.h>
    using namespace std;
    int pivot(int arr[],int n){
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;
        while(start<end){
            if(arr[mid]>=arr[0]){
                start = mid+1;
            }
            else{
                end = mid;
            }
            mid = start + (end-start)/2;
        }
        return arr[start];
    }
    int main(){
    int arr[4]={11,13,15,17};
    cout<<pivot(arr,4);
return 0;  
}