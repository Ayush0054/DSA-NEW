#include<bits/stdc++.h>
    using namespace std;
    vector <int> binarysearch(int arr[],int size){
        vector <int> ans;
        int start =0;
        int end= size -1;
        int mid= start + (end-start)/2 ;
        while(start<=end){
            if(arr[mid]==mid){
                 ans.push_back(mid);
            }
            if(mid > arr[mid]){
                start = mid + 1;         //go to right wAla
            }
            else{
                end = mid -1;            // left wala  
            }
            mid= start + (end-start)/2;       // spaqce complexity
        }
          if(ans.size()==0){
              ans.push_back(-1);
          }

        return ans;
    }
    int main(){
    int arr[]={1,2,3,4,5,5};
    binarysearch(arr,6);
         
    
return 0;
}