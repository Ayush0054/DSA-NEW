#include<bits/stdc++.h>
    using namespace std;
    bool palindrome(string s,int i,int j){
        if(i>j){
            return true;

        }
        if(s[i] != s[j]){
            return false;
        }
        else{
            return palindrome(s,i+1,j-1);
        }
    }
    int main(){
    string s ="aabbaa";
    bool check = palindrome(s,0,s.size()-1);
     if(check){
        cout<<"it is a palindrome";
     }
     else{
        cout<<"it is not a palindrome";
     }
return 0;
}