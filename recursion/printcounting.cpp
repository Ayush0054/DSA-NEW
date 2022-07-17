#include<bits/stdc++.h>
    using namespace std;
    void counting(int n){
       // base case
       if(n<1){
        return;
       }
       cout<<n<<endl;;
       counting(n-1);
    }
    int main(){
    int n;
    cin>>n;
    counting(n);
return 0;
}