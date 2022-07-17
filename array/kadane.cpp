#include<iostream>
    using namespace std;
    int kadane(int arr[],int n){
        long long maxi =0;
        long long sum =arr[0];
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            maxi = max(maxi ,sum);
            if(sum < 0){
                sum =0;
            }
        }
        return maxi;
    }
    int main(){
    int arr[5]={-1,-7,-3,-4,-6};
   cout<< kadane(arr,5);
return 0;
}