#include<iostream>
#include<vector>
    using namespace std;
    int kadane(int arr[],int n){
        //long long maxi =0;
        long long sum =arr[0];
        vector<int> res;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            //    if(sum < 0){
            //     sum =0;
            //     }
            if(sum == 0){
             res.push_back(arr[i]);
            }
        }
         for(int i=0;i<res.size();i++){
        cout<< res[i]<<endl;
         }
        
    }
    int main(){
    int arr[5]={-9,-1,-3,4,-6};
    kadane(arr,5);
return 0;
}
