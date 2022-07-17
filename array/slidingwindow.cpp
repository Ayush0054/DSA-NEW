#include<iostream>
    using namespace std;
   int minswap(int arr[],int n,int k){
        int good =0;
        int bad =0;
        for(int i=0;i<n;i++){
            if(arr[i] <= k){
             good++;
            }
        }

        for(int i=0;i<good;i++){
            if(arr[i] > k){
             bad++;
            }
        }

    int i=0; int j=good; int ans =bad;
    while(j<n){
        if(arr[i] > k){
            bad--;
        }
        if(arr[j] > k){
            bad++;
        }
       ans = min(ans,bad);
        i++; j++;
         
    }
    return ans;

    }
    int main(){
    int arr[6]={4,5,9,11,4,6};
    int k=5;
    cout << minswap(arr,6,5);
return 0;
}