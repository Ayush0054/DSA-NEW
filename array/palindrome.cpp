#include<iostream>
    using namespace std;
 void palindrome(int arr[],int n){
     int flag =0;
        for(int i=0;i<n/2 ;i++){
            if(arr[i] != arr[n-i-1]){
                flag =1;
               // break;
            }
        }
        if(flag == 1){
           cout<<" not palindrome";
        }
        else{
            cout<<"palindrome";
        }
    }
    int main(){
    int arr[5]={1,6,4,7,1};
    palindrome(arr,5);
return 0;
}