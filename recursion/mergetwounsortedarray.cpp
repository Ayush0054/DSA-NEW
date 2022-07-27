#include<bits/stdc++.h>
    using namespace std;
     void merge(int nums1[], int m, int nums2[], int n) {
      int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(j>=0 ){
         if(i>=0 && nums1[i]>nums2[j]){
             nums1[k]=nums1[i];
            i--;
            k--;
         }
            else {
                nums1[k]=nums2[j];
                k--;  
                j--;
            }
       
        }  
    }
    int main(){
    int arr[7]={1,2,4,5,0,0,0};
   int arr2[3]={3,6,7};
   merge(arr,4,arr2,3);
 for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
 }
return 0;
}