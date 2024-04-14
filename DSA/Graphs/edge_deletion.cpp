#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>tree[N],val(N),subtree_sum(N);
void dfs(int n,int p=0){
    subtree_sum[n]+=val[n];
    for(auto &i:tree[n]){
        if(i==p)
            continue;
        dfs(i,n);
        subtree_sum[n]+=subtree_sum[i];
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    dfs(1);
    long long ans=0;
    for(int i=2;i<n;i++){
        int a=subtree_sum[i];
        int b=subtree_sum[1]-a;
        ans=max(a*1LL*b,ans);
    }
    cout<<ans<<'\n';

}