#include<bits/stdc++.h>
    using namespace std;
    
    int main(){
  //  string str ="ayush jha is here";
    // cout<<str.substr(1,3);

//    cout<<str.find("yu");

    //   if(str.find("yu")==string::npos)
    //    cout<<"hehe";
    // reverse(str.begin(),str.end());
    
  // cout<<str;


 vector<char> chars {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int i = 0;
    int ansindex = 0;
    int n = chars.size();
    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        chars[ansindex] = chars[i];
        ansindex++;
       cout<<ansindex<<" ";
        int count = j - i;
        if (count > 1)
        {
            // converting counting into single digit and saving in answer
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansindex] = ch;
                ansindex++;
            }
            // cout<<ansindex<<" ";
        }
        // moving to new charcter
        i = j;
    }
    // cout<< ansindex;
return 0;
}