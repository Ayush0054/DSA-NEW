#include<bits/stdc++.h>
    using namespace std;
    
    int main(){
   string as="hehe i know u";
   int count =0;
   for(int i=0;i<as.size();i++){
      if(as[i]==' '){
        count++;
      } 
   }
   cout<<count+1;
return 0;
}