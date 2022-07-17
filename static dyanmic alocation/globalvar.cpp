#include<bits/stdc++.h>
    using namespace std;
    int score =0;
    void fun1(){
         cout<<score<<endl;
         score++;
         cout<<"one"<<endl;
    }
    void fun2(){
         cout<<score<<endl;
         score+=2;
         cout<<"two"<<endl;
    }
    void fun3(){
         cout<<score<<endl;
         score+=3;
         cout<<"three"<<endl;
    }
    int main(){
    fun1();
    fun2();
    fun3();
return 0;
}