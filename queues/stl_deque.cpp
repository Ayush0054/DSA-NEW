#include<bits/stdc++.h>
    using namespace std;
    
    int main(){
    deque<int> d;
    d.push_front(5); //5
    d.push_back(6);  //5 6
    d.push_front(2); // 2 5 6
    d.push_back(8);  // 2 5 6 8
    cout<<d.front()<<endl;
     d.pop_front();
    cout<<d.front()<<endl;

return 0;
}