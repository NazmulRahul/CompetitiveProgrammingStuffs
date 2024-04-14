#include <bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int n;
vector<int>weight={ 10, 20, 30 },val={ 60, 100, 120 };
long long n,w;
int kp(int i,int W){
    if(i==n or W==0){
        return 0;
    }
    if(arr[W][i]!=-1)
        return arr[W][i];
    int x=-1,y;
    if(weight[i]<=W){
        x=val[i]+kp(i+1,W-weight[i]);
    }
    y=kp(i+1,W);
    return arr[W][i]=max(x,y);
}

int main(){
    memset(arr,-1,sizeof(arr));
    
    // cin>>n>>w;
    n=3,w=50;
    
    vector<vector<int>>dp(w+1,vector<int>(n));
    for(int i=1;i<=w;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                if(i>=weight[j])
                    dp[i][j]=val[j];
            }
            else if(i>=weight[j]){
                dp[i][j]=max(val[j]+dp[i-weight[j]][j-1],dp[i][j-1]);
            }
            else
                dp[i][j]=dp[i][j-1];
        }
    }
    cout<<dp[w][n-1]<<endl;    
    return 0;
}