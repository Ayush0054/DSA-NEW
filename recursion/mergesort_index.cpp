#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s,int mid,int e)
{ 
    
    int s2 = mid +1;
   if(arr[mid] <= arr[s2]){
    return;

   }
   while(s<= mid && s2 <=e){
    if(arr[s]<=arr[s2]){
        s++;
    }
    else{
        int value = arr[s2];
        int indx = s2;
        while(indx != s){
            arr[indx]=arr[indx-1];
            indx--;
        }
        arr[s]=value;
        s++;
        mid++;
        s2++;
    }
   }                          
        
   

}
void meergesort(int *arr, int s, int e)
{
    // base case
    if (s < e)
    {
    int mid = (s + e) / 2;
    meergesort(arr, s, mid);
    meergesort(arr, mid + 1, e);
    merge(arr, s,mid, e);
        
    }
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