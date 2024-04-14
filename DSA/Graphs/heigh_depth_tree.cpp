#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>tree[N];
int height[N],depth[N];
void dfs(int n,int p=0){
    for(auto i:tree[n]){
        if(i==p)
            continue;
        depth[i]=depth[n]+1;
        dfs(i,n);
        height[n]=max(height[n],height[i]+1);
    }
}
