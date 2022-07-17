#include<iostream>
    using namespace std;
    bool search(int arr[],int n,int key){
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                return true;
            }
            
        }
                return false;
    }
    int main(){
   int arr[7]={1,2,3,4,5,6,7};
   int key=5;
   if(search(arr,7,5) == true){
       cout<<"found";
   } 
   else{
       cout<<"not found";
   }
return 0;
}