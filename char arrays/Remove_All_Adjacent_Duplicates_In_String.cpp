#include<bits/stdc++.h>
    using namespace std;
    string removeadj(string s){
    string ans;
    for (char i:s){
        if(ans.size()==0){
            ans.push_back(i);
        }
        else if(i==ans.back()){
            ans.pop_back();
        }
        else{
            ans.push_back(i);
        }
    }
    return ans;
    }
    int main(){
    string s ="assaa";
    cout<<removeadj(s);
return 0;
}