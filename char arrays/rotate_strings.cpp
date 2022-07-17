#include<bits/stdc++.h>
    using namespace std;
     bool rotateString(string s, string goal) {
        if(goal.length() != s.length()){
            return false;
        }
        string temp = goal+goal;
        if(temp.find(s) == string::npos){
            return false;
        }
        else{
            return true;
        }
    }
    int main(){
    string s ="ayush";
    string goal ="shayu";
    cout<<rotateString(s,goal);
return 0;
}