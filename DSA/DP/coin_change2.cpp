#include <bits/stdc++.h>
using namespace std;
int dp[500][60000];
int coin_change(int index,int amount,vector<int>&coins){
    if(amount==0){
        return 1;
    }
    if(index<0){
        return 0;
    }
    if(dp[index][amount]!=-1)
        return dp[index][amount];
    int tem=0;
    for(int i=0;i<=amount;i+=coins[index]){
        tem+=coin_change(index-1,amount-i,coins);//finding all the combinations;
    }
    return dp[index][amount]=tem;
}

int main(){
    memset(dp,-1,sizeof(dp));
    int amount=5;
    vector<int>coins={1,2,5};
    int ans=coin_change(coins.size()-1,amount,coins);
    cout<<ans<<'\n';
    return 0;
}