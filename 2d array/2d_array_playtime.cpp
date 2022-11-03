#include<iostream>
    using namespace std;
    
    int main(){
    int arr[4][4];

    //row wise
//    for(int i=0;i<3;i++){
//       for(int j=0;j<4;j++){
//           cin>>arr[i][j];
//       }
//     }

// col wise


   for(int i=0;i<4;i++){
      for(int j=0;j<3;j++){
          cin>>arr[j][i];
      }
    }



    for(int i=0;i<3;i++){
      for(int j=0;j<4;j++){
          cout<<arr[i][j] <<" ";
      }
          cout<<endl;
    }
 

return 0;
}