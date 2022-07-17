#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;

    // for (int i = 0 ; i < n ; i++){
    //     for (int j = n-i ; j >0 ; j-- ){       //first method
    //         cout << "*";
    //     }cout << endl; 
    // }

    for (int i = 1 ; i <= n ; i++){                  //second method
        for (int j = 1 ; j <=n-i+1 ; j++ ){
            cout << "*";
        }cout << endl; 
    }
    return 0;
}