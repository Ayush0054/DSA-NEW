#include <iostream>
using namespace std;

int main()
{
    // for(int i =0;i<256;i++){
    //     cout<<(char)i <<" "<<endl;
    // }
//********************************************************************************
    // int num;
    // cin >> num;
    // if(num> 5){
    // cout<<"yes";
    // }
    //  else{
    //     cout<<"lmao";
    // }
//****************************************************---------------------------------------
    // switch (num)
    // {
    // case 0: cout<<"lmafao"<<endl;
    //     break;

    // default:cout<<"he is the comback"<<endl;
    //     break;
    // }

    //*************************** calculator

    // int a, b;
    // cout<<"a and b ploxx"<<endl;
    // cin >> a;
    // cin >> b;
    // char op;
    // cout<<"op ploxx"<<endl;
    // cin >> op;
    // switch (op)
    // {
    // case '+':
    //     cout << a+b << endl;
    //     break;
    // case '-':
    //     cout << a-b << endl;
    //     break;
    // case '*':
    //     cout << a*b << endl;
    //     break;
    // case '/':
    //     cout << a/b << endl;
    //     break;
    // }


    //***********************************************************************whileloop
//  int num =5;
//  while(num != 0){
//      cout<<"num value"<< num<<endl;
//      num = num -1;
//  }
//*********************************************************************hw1
// int num =1;
// while(num != 0){
//     cout<<"ayush"<<endl;
// }

//**********************************************************************************forloop
// int n=5;
// for(int i=0;i<n;i++){
//     cout<<"ayush"<<endl;
// }
//     return 0;
//     //i++ post increment
//     // ++i pre increment

//*********************

// int n=5;
// for(int i=8;i>n;i--){
//     cout<<"ayush"<<endl;
// }
//     return 0;
//     //i-- post decrement
//     // --i pre decrement
//***************************************************************************************continue
int n=10;
for(int i=1;i<= n ;i++){
    if(i%2==0){
        continue;
    }
    cout<< i <<endl;
}
}