#include<bits/stdc++.h>
    using namespace std;
    void dummy(int *arr, int n){
        cout<<sizeof(arr)<<endl;      // ->pointer passed
    }
    int main(){
    int arr[] ={1,2,4,5,6};
    cout<<arr<<endl;


    // int p =34;
    // int &c = p;
    // cout<< c;


    cout<<*arr<<endl;
    cout<<*(arr +1)<<endl;
    cout<<*(arr +2)<<endl;
    cout<<*(arr +3)<<endl;
    cout<<*(arr +4)<<endl;
  int i=0;
  cout<<i[arr]<<endl;


     dummy(arr,5);
return 0;
}