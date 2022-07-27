#include<bits/stdc++.h>
    using namespace std;
   void merge(int nums1[], int m, int nums2[], int n, int nums3[]) {
        int i=0;
        int j=0;
        int k=0;
        while(i<m && j<n){
         if(nums1[i]<nums2[j]){
             nums3[k]=nums1[i];
             i++;
             k++;
         }
            else{
                nums3[k]=nums2[j];
                j++;
                k++;
            }
        
        }
        while(i<m){
          nums3[k]=nums1[i];
             i++;
             k++;
        }
        while(j<n){
            nums3[k]=nums2[j];
                j++;
                k++;
        }
    }
    int main(){
   int arr[4]={1,2,4,5};
   int arr2[3]={3,6,7};
   int arr3[7]={0};
   merge(arr,4,arr2,3,arr3);
 for(int i=0;i<7;i++){
    cout<<arr3[i]<<" ";
 }
return 0;
}