#include<bits/stdc++.h>
    using namespace std;
   bool checkdouble(int arr[],int n){
        for(int i=1;i<n;i++){
            int first=arr[i];
            for(int j=i+1;j<n;j++){
                if(2 *first == arr[j]){
                    return true;
                }
               else if(2*arr[j]==first){
                    return true;
                }
                
            }
        }
        return false;
    }
    int main(){
    int arr[4]={7,1,12,11};
    cout << checkdouble(arr,4);
return 0;
}