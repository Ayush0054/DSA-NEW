#include<bits/stdc++.h>
    using namespace std;
    bool ispossible(int A[],int N,int M,int mid){
        
        int student =1;
        int page =0;
        for(int i=0;i<N;i++){
            if(page + A[i] <=mid){
                 page = page + A[i];
            }
            else{
                student++;
                if(student > M || A[i] > mid){
                    return false;
                }
                page = A[i];
            }
                    }
                    return true;
    }
    int bookallocate(int A[],int N,int M){
        int s=0;
        int sum =0;
        for(int i=0;i<N;i++){
             sum = sum + A[i];
        }
        int e = sum;
        int ans =-1;
        int mid = s+ (e-s)/2;
        while(s<=e){
            if(ispossible(A,N,M,mid)){
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
    int A[4]={12,34,67,90};
    int m =2;
     cout<< bookallocate(A,4,2);

return 0;
}