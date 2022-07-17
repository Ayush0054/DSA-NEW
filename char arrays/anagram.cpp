#include <bits/stdc++.h>
using namespace std;
bool check_anagaram(string a, string b)
{
    int freq[26] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        int index = ch - 'a';        //to map the index
        freq[index]++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        char ch = b[i];
        int index = ch - 'a';
        freq[index]--;
    }
    for(int i=0;i<26;i++){
        if(freq[i] !=0){
            return false;
        }
    }
    return true;
}
int main()
{
    string a = "ayush";
    string b = "ashyu";
    cout << "ans is " << check_anagaram(a, b);
    return 0;
}