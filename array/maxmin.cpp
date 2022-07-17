#include<bits/stdc++.h>
    using namespace std;
    int maxno(int arr[],int n){
        int maxno = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxno){
                maxno = arr[i];
            }
        }
        return maxno;
    }

       int minno(int arr[],int n){
        int minno = INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<minno){
                minno = arr[i];
            }
        }
        return minno;
    }
    int main(){
    int arr[5]={1,2,3,4,5};
   cout<< maxno(arr,5)<<endl;
   cout<< minno(arr,5);
return 0;
}