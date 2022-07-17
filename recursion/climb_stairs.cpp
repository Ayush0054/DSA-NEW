#include<bits/stdc++.h>
    using namespace std;
    int climb(long long nstairs){
        if(nstairs<0){
            return 0;
        }
        if(nstairs==0){
            return 1;
        }
        return climb(nstairs-1)+ climb(nstairs-2);
    }
    int main(){
    int n=5;
    cout<<climb(5);
return 0;
}