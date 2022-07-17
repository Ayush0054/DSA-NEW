#include<iostream>
    using namespace std;
    int getfactorial(int n){
        int ans =1;
        for(int i=n;i>=1 ; i--){
            ans =ans *i;
        }
        return ans;
    }
    int main(){
    int fact=getfactorial(3);
    cout<<fact;
return 0;
}