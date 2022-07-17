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
    int totalocc(int arr[], int n,int x){
        int first = firsocc(arr,n,x);
        int last = lastocc(arr,n,x);
        if(first == -1 || last == -1){
            return 0;
        }
     return (last - first + 1);
    }
    int main(){
    int arr[6]={1,2,3,4,4,4};
    cout << totalocc(arr,6,4);
return 0;
}