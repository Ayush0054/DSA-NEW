#include<bits/stdc++.h>
    using namespace std;
    void func1(int** q){
        q = q+1;
    }
    void func2(int** q){
        *q = *q+1;
    }
    void func3(int** q){
        **q = **q+1;
    }
    int main(){
    int a=5;
    int* p=&a;
    int** q =&p;
    // cout<<"before "<<q<<endl;
    // cout<<"before "<<*q<<endl;
    // cout<<"before "<<**q<<endl;
    // func1(q);
    // cout<<"after "<<**q<<endl;
    // cout<<"after "<<**q<<endl;
    // cout<<"after "<<**q<<endl;

    cout<<"before "<<q<<endl;
    cout<<"before "<<*q<<endl;
    cout<<"before "<<**q<<endl;
    func2(q);
    cout<<"after "<<**q<<endl;
    cout<<"after "<<**q<<endl;
    cout<<"after "<<**q<<endl;

    // cout<<"before "<<q<<endl;
    // cout<<"before "<<*q<<endl;
    // cout<<"before "<<**q<<endl;
    // func3(q);
    // cout<<"after "<<**q<<endl;
    // cout<<"after "<<**q<<endl;
    // cout<<"after "<<**q<<endl;

return 0;
}