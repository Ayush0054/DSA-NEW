#include<bits/stdc++.h>
    using namespace std;
    // void square(int *p){
    //     int a=10;                  //1
    //     p=&a;
    //     *p=(*p)*(*p);
    // }
    // int fun(int x,int *y,int **z){
    //     int p,q;
    //     **z+=1;               //**z=**z+1
    //     q=**z;                     //q=5                                     //2
    //     *y+=2;                   //*y=7
    //     p=*y;                     //p=7
    //     x+=3;                     // x=7 
    //     return x+p+q;
    // }
    void increm(int** p){
        (**p)++;
    }
    int main(){
    // int a =10;
    // square(&a);              //1
    // cout<<a;

    // int c,*b,**a;
    // c=4;
    // b=&c;
    // a=&b;                   //2
    // cout<<fun(c,b,a);

    int num =10;
    int*ptr =&num;
    increm(&ptr);
    cout<<num;
return 0;
}