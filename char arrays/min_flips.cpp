#include<bits/stdc++.h>
    using namespace std;
    char flip(char expected){
        if(expected =='0'){
             return '1';
        }
        else{
            return '0';
        }
    }
    int getflips(string s , char expected){
        int cntflips = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] != expected){
                cntflips++;
            }
                expected =flip(expected);
        }
        return cntflips;
    }
    int min(string s){
     int ans0 =getflips(s,'0');
     int ans1 =getflips(s,'1');
     int ans = min(ans0,ans1);
     return ans;
    }
    int main(){
    string s ="0101";
   cout<< min(s);
return 0;
}