#include<bits/stdc++.h>
    using namespace std;
    void transpose(int arr[3][3],int n){
         for(int i=0;i<n;i++){
             for(int j=0;j<i;j++){
                 swap(arr[i][j],arr[j][i]);
             }
         }
    }
    void rotate(int arr[3][3],int n){
         for(int i=0;i<n;i++){
        int ptr1=0;
        int ptr2=n-1;
             while(ptr1<ptr2){
                 swap(arr[i][ptr1],arr[i][ptr2]);
                  ptr1++;
                  ptr2--;
             }
         }
    }
    int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
   transpose(arr,3);
   rotate(arr,3);
    for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
             cout<<arr[i][j] <<" "; 
         }
         cout<<endl;
    }
return 0;
}