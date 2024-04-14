#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>graph[N];// adjacency list representation of graphs; O(V+E);
// vector<pair<int,int>>graph[N] for weighted graph
bool visited[N]={false};
int cnt;
void dfs(int n){// complexity O(N+E); when E=N^2, complexity O(N+N^2);
    visited[n]=1;
    for(auto &i:graph[n]){
        if(visited[i])
            continue;
        dfs(i);
    }
    return;
}
int main(){
    int n,m;
    cin>>n>>m;
   for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
   } 
   dfs(0);
   cout<<cnt<<endl;
    return 0;
}

/*
0 1
1 2 3
2 3
3 4

*/