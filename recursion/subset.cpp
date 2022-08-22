#include<bits/stdc++.h>
    using namespace std;

    template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{
    // Printing all the elements
    // using <<
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

    void solve(vector<int> arr,vector<int> output,int index,vector<vector<int>>& ans){
      if(index<arr.size()){
        ans.push_back(output);
        return;
      }
      //exclude
      solve(arr,output,index+1,ans);
      //include
      int element =arr[index];
      output.push_back(element); 
      solve(arr,output,index+1,ans);
    }
    vector<vector<int>> subset(vector<int>& arr){
      vector<vector<int>> ans;
    vector<int> output;
      int index=0;
      solve(arr,output,index,ans);
       return ans;
    }
    int main(){
    vector<int> arr={1,2,34};
   cout<< subset(arr)<<" ";
   
return 0;
}