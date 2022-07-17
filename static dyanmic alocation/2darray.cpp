#include<bits/stdc++.h>
    using namespace std;
    
    int main(){
        int n;
        cin>>n;
    int** arr=new int*[5];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
     
    //input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
        //print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    //delete
    for(int i=0;i<n;i++){
        delete []arr[i];
    }
return 0;
}