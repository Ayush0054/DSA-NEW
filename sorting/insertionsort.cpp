#include<bits/stdc++.h>
    using namespace std;
     void sorti(int arr[],int n){
        int i,j,key;
        for(int i=1;i<n;i++){
            key=arr[i];
            j=i-1;
            for(;j<n;j--){
                if(arr[j]>key){
                    //shift
                    arr[j+1]=arr[j];
                }
                else{ //stop
                    break;
                }
            }
            arr[j+1]=key;
        }
        
     }    
    int main(){
    int arr[5]={12,13,1,5,2};
    sorti(arr,5);
     for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
return 0;
}