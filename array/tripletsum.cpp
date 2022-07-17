#include <bits/stdc++.h>
#include <vector>
using namespace std;
int tripletsum(int arr[], int n, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; j < n; j++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {

                    vector<int> temp;
                    temp.push_back((arr[i], arr[j], arr[k]));
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int s = 6;
    tripletsum(arr, 6, 6);
    return 0;
}