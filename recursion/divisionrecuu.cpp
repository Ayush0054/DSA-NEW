#include<bits/stdc++.h>
    using namespace std;
    int divi(int a,int b){
       if(a<b){
        return 0;
       }
       return 1+ divi(a-b,b);
    }
    int main(){
    int a=15;
    int b=5;
    cout<<divi(a,b);
return 0;
}