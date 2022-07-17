#include<bits/stdc++.h>
    using namespace std;
   int search(int arr[],int start,int end,int key){
        int mid= start+(end -start)/2;
        if(start<=end){

         if(arr[mid] == key){
         return mid;
         }
         if(arr[mid] >key){
             return  search( arr, start, mid-1, key);

         }
         else{
               return  search( arr,  mid+1, end, key);
         }
    }
    return -1;
        }
    int main(){
    int arr[5]={1,2,3,4,5};
    int key = 5;
      cout<<search(arr,0,5-1,4);
return 0;
}