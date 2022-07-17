#include<bits/stdc++.h>
    using namespace std;
         int getpivot(int nums[],int start, int end ){
        int mid = start + (end-start)/2;
        while(start<end){
            if(nums[mid]>=nums[0]){
                start = mid+1;
            }
            else{
                end = mid;
            }
            mid = start + (end-start)/2;
        }
        return start;
    }
 int binarysearch(int nums[],int low,int high, int target){
           int mid = low + (high -low)/2;
            while(low<=high){
                if(nums[mid]==target){
                    return mid;
                }
                if(target >nums[mid]){
                  low = mid +1;    
                  }
                else{
                    high =mid -1;
                }
                  mid = low + (high -low)/2;
            }
        return -1;
    }
int search(int nums[],int low,int high, int target) {
    int pivot = getpivot(nums,low,high);
   
     int ans  = binarysearch(nums,low,pivot-1,target);
        if(ans != -1){
            return ans;
        }
    else{
           return binarysearch(nums,pivot,high,target);
             }
 
    }
    int main(){
    int arr[5]={7,9,1,2,3};
    int target=7;
    cout<<search(arr,0,4,2);
return 0;
}