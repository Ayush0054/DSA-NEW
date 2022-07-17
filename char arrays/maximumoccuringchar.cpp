#include<bits/stdc++.h>
    using namespace std;
    char getMaxOccuringChar(string str){
    int max =0;
        char res;
     map<char,int>m;
     for(int i=0;i<str.size();i++){
     
         m[str[i]]++;
     }
      for (auto i : m){
            if (max < i.second){
                max = i.second;
                res = i.first;
            }
      }
       return res; 
    }
    int main(){
        string str ="hyush";
        cout<<getMaxOccuringChar(str);

return 0;
}