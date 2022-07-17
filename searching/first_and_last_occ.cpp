#include<bits/stdc++.h>
    
    using namespace std;
    int firsocc(int nums[],int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(nums[mid]== target){
            ans = mid;
            end = mid -1;
        }
       else if(nums[mid] > target){
            end = mid -1;
        }
       else if(nums[mid]< target){
            start = mid +1;
        }
         mid = start + (end - start)/2;
    }
          return ans;
    }
    int lastocc(int nums[],int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(nums[mid]== target){
            ans = mid;
            start = mid +1;
        }
        else if(nums[mid] > target){
            end = mid -1;
        }
        else if(nums[mid]< target){
            start = mid +1;
        }
         mid = start + (end - start)/2;
    }
          return ans;
    }
    int main(){
    int arr[6]={1,2,3,4,4,4};
     cout<<firsocc(arr,6,4)<<endl;
     cout<<lastocc(arr,6,4)<<endl; 
return 0;
}