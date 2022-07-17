#include<bits/stdc++.h>
    using namespace std;
    void reversestring(char arr[] , int n){
        n = strlen(arr);
        int s = 0;
        int e = n-1;
        while(s<e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    for(int i=0;i<10;i++){
        cout<< arr[i];
    }

    }
    int main(){
   char name[10]="AYUSH";
   reversestring(name,5);
return 0;
}