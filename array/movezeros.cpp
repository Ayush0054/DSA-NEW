#include<iostream>
#include<vector>
    using namespace std;
 void moveZeroes(int nums[], int n) {
      int high= 1;
        int low =0;
        while(high<n){
            if(nums[low]==0 && nums[high] != 0){
                swap(nums[low],nums[high]);
                low++;
                high++;
            } 
           else if(nums[low]==0 && nums[high]==0 ){
                high++;
                // swap(nums[low],nums[high]);
            }
            else{
                low++;
                high++;
            }
        }
       }
       int main(){
       int arr[6]={0,5,0,5,0,2};
    moveZeroes(arr,6);
        for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}