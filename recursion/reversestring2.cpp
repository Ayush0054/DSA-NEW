#include<bits/stdc++.h>
    using namespace std;
   void solve(string& s ,int i){  
    // cout<<"check "<<s<<endl;
    if(s.size()-i<=i){
      return ;
    }   
    swap(s[i],s[s.size()-i-1]);
    i++;
    solve(s,i);
    }
    int main(){
     string s ="hello ayush";
    solve(s,0);
    cout<< s;
return 0;
}