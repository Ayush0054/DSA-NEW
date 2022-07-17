#include<bits/stdc++.h>
    using namespace std;
   string removeocc(string s,string part){
       while(s.size()!=0 && s.find(part)<=s.size()-1){
           s.erase(s.find(part),part.size());
       }
       return s;
   } 
    int main(){
         string a="aeayushjhais";
         string part="jha";
         cout<<removeocc(a,part);
return 0;
}