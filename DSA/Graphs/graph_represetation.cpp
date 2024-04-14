#include <bits/stdc++.h>
using namespace std;
const int N=1e3;
vector<int>graph[N];// adjacency list representation of graphs; O(V+E);
// vector<pair<int,int>>graph[N] for weighted graph
int main(){
   int n;
   cin>>n;
   int m;
   cin>>m;
   for(int i=1;i<=m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
   } 
    return 0;
}

/*
4 6
1 2 3 4 
2 3 4
3 4

*/