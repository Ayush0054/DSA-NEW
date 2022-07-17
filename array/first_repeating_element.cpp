#include<iostream>
    using namespace std;
    int repeat(int arr[],int n){
        for(int i =0;i< n;i++){
            for(int j =i+1;j<n;j++){
                if(arr[i] == arr[j]){
                    return i+1;
                }
            }
        }
        return -1;
    }
    int main(){
    int arr[5] ={6,3,6,3,5};
    cout <<repeat(arr,5);
return 0;
}