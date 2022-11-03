#include<bits/stdc++.h>
    using namespace std;
    void printsum(int arr[3][3],int row,int col){
        for (int i = 0; i < row; i++)
        {
            int sum =0;
            for(int j=0;j<col;j++){
               sum = sum + arr[i][j];
            }
            cout<<sum<<" ";
        }
        
    }
    int main(){
        int arr[3][3]={1,2,3,4,5,6,7,8,9};
      

    printsum(arr,3,3);
return 0;
}