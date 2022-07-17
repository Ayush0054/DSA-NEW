#include<bits/stdc++.h>
    using namespace std;
    int exponent(int n){
        if(n==0){
            return 1;
        }
        int smallerproblem=exponent(n/2);
        if(n&1){
            return smallerproblem * smallerproblem *2;             //oddcase
        }
        else{
            return smallerproblem * smallerproblem;         //even case
        }
    }
    int main(){
    int n =10;
    cout<<exponent(n);
return 0;
}