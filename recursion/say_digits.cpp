#include<bits/stdc++.h>
    using namespace std;
    void saydigit(int n,string arr[]){
    //bc
    if(n==0)
    return;
    //processing
    int digit = n%10;
    n=n/10;
    //recursive call
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
    }
    int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    saydigit(n,arr);
return 0;
}