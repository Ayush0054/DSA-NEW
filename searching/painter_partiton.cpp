#include<bits/stdc++.h>
    using namespace std;
    bool ispossible(int arr[],int n,int k,int mid){
        
        int painter =1;
        int wood =0;
        for(int i=0;i<n;i++){
            if(wood + arr[i] <=mid){
                 wood = wood + arr[i];
            }
            else{
                painter++;
                if(painter > k || arr[i] > mid){
                    return false;
                }
                wood = arr[i];
            }
                    }
                    return true;
    }
    int mintime(int arr[],int n,int k){
        int s=0;
        int sum =0;
        for(int i=0;i<n;i++){
             sum = sum + arr[i];
        }
        int e = sum;
        int ans =-1;
        int mid = s+ (e-s)/2;
        while(s<=e){
            if(ispossible(arr,n,k,mid)){
             ans = mid;
             e = mid -1;
            }
            else{
                s = mid +1;
            }
            mid = s+ (e-s)/2;
        }
    }
    int main(){
    int arr[5]={5,10,30,20,15};
    int m =3;
     cout<< mintime(arr,5,3);

return 0;
}