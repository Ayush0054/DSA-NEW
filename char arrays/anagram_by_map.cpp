#include<bits/stdc++.h>
    using namespace std;
    bool check_anagaram(string a, string b)
{      map<char,int>m;

    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        m[ch]++;
       
    }
    for (int i = 0; i < b.length(); i++)
    {
        char ch = b[i];

        m[ch]--;
    }
    for(auto i:m){
        if(i.second !=0){
            return false;
        }
    }
    return true;
}
    int main(){
     string a = "ayush";
    string b = "ashyu";
    cout << "ans is " << check_anagaram(a, b);
return 0;
}