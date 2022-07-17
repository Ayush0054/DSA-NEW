#include<bits/stdc++.h>
    using namespace std;
    
    int main(){
    // int ramesh=21;
    // int& suresh=ramesh;
    // ramesh--;
    // suresh--;
    // cout<<ramesh<<endl;
    // cout<<suresh;

        //   int i=5;
        //   int &j=i;
        //   cout<<i<<endl;
        //   i++;
        //   cout<<j<<endl;
        //   j++;
        //   cout<<i<<endl;

          int n;
          cout<<"enter value of n"<<endl;
          cin>>n;
          int *arr=new int[n];
          for(int i=0;i<n;i++){
              cin>>arr[i];
          }
          for(int i=0;i<n;i++){
              cout<<arr[i];
          }
          
return 0;
}