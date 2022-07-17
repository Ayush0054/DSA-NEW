#include<bits/stdc++.h>
    using namespace std;
    int search(int arr[],int n,int target,int index=0){
        if(n<=0){
            return -1;
        }
        if (target == arr[0]){
        return index;
    }
        return search(arr+1,n-1,target,index+1);
    }
    int main(){
      int arr[5]={1,4,3,2,6};
      cout<<search(arr,5,4);
return 0;
}