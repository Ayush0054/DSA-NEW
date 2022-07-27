#include<bits/stdc++.h>
    using namespace std;
    int mul(int a,int b){
        if(b==0){
            return 0;
        }
        return a+mul(a,b-1);
    }
    int main(){
    int a=5;
    int b=3;
    cout<<mul(5,4);
return 0;
}