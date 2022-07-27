#include<bits/stdc++.h>
    using namespace std;
   void solve(string& s ,int i, int j){  
    if(i>j){
      return ;
    }   
    swap(s[i],s[j]);
    i++;
    j--;
    solve(s,i,j);
    }
    int main(){
     string s ="ayush";
    solve(s,0,4);
    cout<< s;
return 0;
}