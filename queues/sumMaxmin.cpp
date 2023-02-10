#include<bits/stdc++.h>
    using namespace std;
    int solve(int *arr,int n,int k){
        deque<int> mini;
        deque<int> maxi;
        for(int i =0;i<k;i++){
            while(!maxi.empty() && arr[maxi.back()] <=arr[i]){
                maxi.pop_back();
            }
            while(!mini.empty() && arr[mini.back()] >=arr[i]){
                mini.pop_back();
            }

            maxi.push_back(i);
            mini.push_back(i);
        }
             int ans = 0;
            ans = ans + arr[maxi.front()] + arr[mini.front()];


        for(int i =k;i<n;i++){

         if(!maxi.empty() && i-maxi.front() >= k){
           maxi.pop_front();

         }
         if(!mini.empty() && i-mini.front() >= k){

           mini.pop_front();
         }
        
        while(!maxi.empty() && arr[maxi.back()] <=arr[i]){
                maxi.pop_back();
            }
         while(!mini.empty() && arr[mini.back()] >=arr[i]){
                mini.pop_back();
            }

            maxi.push_back(i);
            mini.push_back(i);
 
           ans = ans + arr[maxi.front()] + arr[mini.front()];
        }
        return ans;
    }
    int main(){
      int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, k) << endl;
return 0;
}