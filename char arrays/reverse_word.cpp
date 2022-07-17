#include<bits/stdc++.h>
    using namespace std;
    string reverseWords(string S) 
    { 
        int temp=0;
          reverse(S.begin(),S.end());
          for(int i=0;i<S.size();i++){
          if(S[i]=='.' || S[i]==' '){
          reverse(S.begin()+temp,S.begin()+i);
          temp =i+1;
          }
          }
          reverse(S.begin()+temp,S.end());
          return S;
    } 
    int main(){
    string str ="ayush.jha.is.here";
    cout<<reverseWords(str);
return 0;
}