#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int dp[N];
int cnt;
int LIS(int n,vector<int>&arr){
     cnt++;
    if(dp[n]!=-1)
        return dp[n];
    int ans=1;
    for(int i=0;i<n;i++){
    //    cnt++;
        if(arr[i]<arr[n]){
            ans=max(ans,LIS(i,arr)+1);
            // ans=max(ans,LIS(i,arr)+1);
        }
    }
    return dp[n]=ans;//o(n*n)
    // return ans;//o(2^n*n)
}
int main(){
    // vector<int>arr={1,2,3,4,5,1,1,8,9,10,11};
    // int n=(int)arr.size();
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        dp[i]=-1;
    int ans=1;
    vector<int>ls(n);
    for(int i=0;i<n;i++)
        ls[i]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                ls[i]=max(ls[j]+1,ls[i]);
            }
        }
        ans=max(ans,ls[i]);
        // ans=max(ans,LIS(i,arr));
    } 
    cout<<n<<" "<<ans<<'\n';
    cout<<cnt<<'\n';

    return 0;
}