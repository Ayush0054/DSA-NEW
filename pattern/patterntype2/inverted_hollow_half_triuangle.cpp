#include<iostream>
    using namespace std;
    
    int main(){
        int n=10;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if (j == i ||i == 1 || j == n)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
return 0;
}