#include<bits/stdc++.h>
    using namespace std;
    int solve(int coins[],int n,int amount,int currentcoin){
        if(amount ==0){
            return 1;
        }
        if(amount < 0){
            return 0;
        }
        int ways =0;
        for(int i=currentcoin;i<n;i++){
            ways = ways + solve(coins,n,amount-coins[i],i);
        }  
        return ways;
    }
    int main(){ 
    int coins[2]={1,2};
    int amount =4;
    cout<<solve(coins,2,4,0);
return 0; 
}