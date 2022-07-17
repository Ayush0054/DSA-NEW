#include <bits/stdc++.h>
#include <vector>
using namespace std;
int intersection(int nums1[], int n, int nums2[], int m )
{
    vector<int> res;
    sort(nums1, nums1 + n);
    sort(nums2, nums2 + m);
    
    int high = 0;
    int low = 0;
    while (high < n && low<m)
    {
        if (nums1[high] > nums2[low])
        {
            low++;
        }
        else if (nums1[high] < nums2[low])
        {
            high++;
        }
        else if (nums1[high] == nums2[low])
        {
             if(res.size()==0 || res.back() != nums1[high])
            res.push_back(nums1[high]);
            low++;
            high++;
        }
    }

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
int main()
{
int arr1[4]={1,2,2,1};
int arr2[2]={2,2};

 intersection(arr1,4,arr2,2);
    return 0;
}