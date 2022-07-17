#include<bits/stdc++.h>
    using namespace std;
         int ogs(int arr[],int i,int j){
             if(i>j){
                 return 0;
             }
             int choice1 = arr[i]+ min(ogs(arr,i+2,j),ogs(arr,i+1,j-1));
             
             int choice2 = arr[j]+ min(ogs(arr,i+1,j-1),ogs(arr,i,j-2));
             int ans =max(choice1,choice2);
             return ans;

         }
    int main(){
    int arr[]={20,30,2,2,2,10};
    int i=0;
    int j =5;
    cout<<ogs(arr,i,j);
return 0;
}