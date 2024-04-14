#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
/*
class Solution {
public:
    int dp[10001];
    int coin(vector<int>& coins,int nums){
        if(nums==0)
            return 0;
        if(nums<0)
            return INT_MAX;
        if(dp[nums]!=-1)
            return dp[nums];
        int ans=INT_MAX;
        for(auto &c:coins){
             ans=min(ans*1LL,coin(coins,nums-c)*1LL+1);
        }
    return dp[nums]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans= coin(coins,amount);
        if(ans==INT_MAX)
            return -1;
        else
            return ans;
    }
};

*/

int dp[10001];
int cnt;
int com;
int coin(vector<int>& coins,int nums,int index){
    com++;
    if(nums<0 ){
        return 0;
    }
    if(dp[nums]!=-1)
        return 0;
    if(nums==0){
        return 1;
    }   
    int ways=0;   
    for(int i=0;i<coins.size();i++){
        if(i>=index)
            ways+=coin(coins,nums-coins[i],i);
    }
    return dp[nums]=ways;
}
int main(){
    memset(dp,-1,sizeof(dp));
    vector<int>coins={1,2,5};
    int num=5;
    // cout<<coin(coins,num)<<endl;
    cout<<coin(coins,num,0)<<endl;
    cout<<com<<endl;
    return 0;
}