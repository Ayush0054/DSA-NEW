#include<iostream>
#include<math.h>
    using namespace std;
    
    int main(){
    //**************************************************to obtain individual digaits of a given no***************************************************
    // int n =13713479628;
    // while(n!=0){
    //     int digit = n%10;
    //     cout<<"digit : "<<digit<<endl;
    //     n = n/10;\
    // }
    //***************************************************decimal to binary************************************************
    int n=4;
    int i=0;
    int ans=0;
    while(n != 0){
        int bit = n&1;
        ans =(bit * powf(10,i)) + ans;
        n=n>>1;
        i++;
    }
    cout<<"binary represt of n is " <<ans <<endl;
return 0;
}