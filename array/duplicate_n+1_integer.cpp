#include<bits/stdc++.h>
#include<vector>
    using namespace std;
    int duplicate(int arr[], int n){
        int sum =0;
        sort(arr[0],arr[n-1]);
    for(int i=1;i<n;i++){
        sum = arr[i] & arr[i+1];
        return sum;
    }
    return -1;      
    }
    int main(){
    int arr1[5] = {4, 3, 2, 1, 3};
    cout<< duplicate(arr1,5);
return 0;
}