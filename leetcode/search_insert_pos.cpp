#include<bits/stdc++.h>
    using namespace std;
     int searchInsert(int nums[],int n, int target) {
        int start = 0;
        int end = n-1;
        int mid = start + (end - start)/2;
        if(target<=nums[0])
            return 0;
        if(target>nums[end])
            return end+1;
        while(start<end){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                 end = mid ;
            }
            else{
                start=mid +1; 
            }
             mid = start + (end - start)/2;
        }
        return start;
    }
    int main(){
    int arr[6]={1,2,3,4,6,7};
    int target =5;
    cout<<searchInsert(arr,6,5);
return 0;
}