#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    map<char,int>m;
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
        chars[ansindex++] = chars[i];

        int count = j - i;
        if (count > 1)
        {
            // converting counting into single digit and saving in answer
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansindex++] = ch;
            }
        }
        // moving to new charcter
        i = j;
    }

    return ansindex;
}
int main()
{
    vector<char> chars {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(chars);
    return 0;
}