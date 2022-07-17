#include<bits/stdc++.h>
#include<vector>
    using namespace std;
    int commonelement(int arr[],int n,int arr2[],int m,int arr3[],int l){
        int i=0;
        int j=0;
        int k=0;
        vector<int> res;
        while(i<n && j<m && k<l){
            if( arr[i] == arr2[j] && arr2[j] == arr3[k]){
                if(res.size()==0  ||  res.back()!=arr[i])
                res.push_back(arr[i]);
                i++;
                j++;
                k++;
            }
            else if(arr[i] > arr2[j]){
                j++;
            }
            else if(arr[i] < arr2[j]){
                i++;
            }
            else if(arr2[j] > arr3[k]){
                k++;
            }
            else if(arr2[j] < arr3[k]){
                j++;
            }
            else if(arr[i] > arr3[k]){
                k++;
            }
            else if(arr[i] < arr3[k]){
                i++;
            }
            // else{
            //     k++;
            // }
        }
         for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    }
    int main(){
    int arr1[4]={1,2,2,1};
      int arr2[2]={2,1};
      int arr3[3]={2,1,3};
      commonelement(arr1,4,arr2,2,arr3,3);
return 0;
}