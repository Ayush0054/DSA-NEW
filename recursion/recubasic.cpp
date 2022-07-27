
  #include<bits/stdc++.h>
    using namespace std;
    int printfun(int test){
        if(test<1){
            return 0;
        }
        cout<<test<<endl;
        printfun(test -1);
        // cout<<test<<endl;

    }
    int main(){
    int test =4;
    printfun(test); 
  return 0;
  }