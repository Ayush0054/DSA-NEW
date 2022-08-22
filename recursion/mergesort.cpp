#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{ 
    // declaring mid 
    int mid = (s + e) / 2;
    // making two new array with length of half of main array 
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
 //copy elements of  half main array in arr1
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }
 //copy elements of  other half main array in arr2

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }
 // declare indexes of two array
    int index1 = 0;
    int index2 = 0;
    k = s;
    // copy both array in main array
    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {

            arr[k++] = arr1[index1++];
        }
        else
        {
            arr[k++] = arr2[index2++];
        }
    }
 // if len1 > len2
    while (index1 < len1)
    {
        arr[k++] = arr1[index1++];
    }
// len 2 > len 1
    while (index2 < len2)
    {
        arr[k++] = arr2[index2++];
    }
    delete[] arr1;
    delete[] arr2;
}
void meergesort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    meergesort(arr, s, mid);
    meergesort(arr, mid + 1, e);
    merge(arr, s, e);
}
int main()
{
    int arr[] = {38, 43, 6, 1, 3, 9, 18};
    int n = 7;
    meergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}