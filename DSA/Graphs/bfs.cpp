#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>tree[N],level(N),vis(N);
queue<int>q;
void bfs(int source){
    queue<int>q;
    level[source]=1;
    vis[source]=1;
    q.push(source);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(auto &i:tree[cur]){
            if(!vis[i]){
                vis[i]=1;
                q.push(i);
                level[i]=level[cur]+1;
            }
        }
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

}