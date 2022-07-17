#include <bits/stdc++.h>
#include <vector>
using namespace std;
int unionh(int nums1[], int n, int nums2[], int m)
{
    vector<int> res;
    sort(nums1, nums1 + n);
    sort(nums2, nums2 + m);

    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        while (i > 0 && i < n && nums1[i] == nums1[i - 1])
        {
            i++;
        }

        while (j > 0 && j < m && nums2[j] == nums2[j - 1])
        {
            j++;
        }
        if (nums1[i] > nums2[j] && j < n && i < m)
        {
            res.push_back(nums1[j]);
            j++;
        }
        if (nums1[i] < nums2[j] && j < n && i < m)
        {
            res.push_back(nums1[i]);
            i++;
        }
        if (nums1[i] == nums2[j] && j < n && i < m)
        {
            if(res.size()==0 || res.back() != nums1[i])
            res.push_back(nums1[i]);
            j++;
            i++;
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}
int main()
{
    int arr1[5] = {2, 3, 4, 5, 2};
    int arr2[5] = {1, 2, 3, 4, 5};

    unionh(arr1, 5, arr2, 5);
    return 0;
}