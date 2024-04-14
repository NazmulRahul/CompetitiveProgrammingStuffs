#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int>tree[N];
vector<int>parent(N);
void dfs(int n, int p = -1) {
    parent[n] = p;
    for (auto i : tree[n]) {
        if (i == p)
            continue;
        dfs(i, n);
    }
}
vector<int> path(int v) {
    vector<int>ans;
    while (v != -1) {
        ans.push_back(v);
        v = parent[v];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    dfs(1);
    int x, y;
    cin >> x >> y;
    vector<int>px, py;
    px = path(x);
    py = path(y);
    int lcm = -1;
    for (int i = 0; i < px.size() and i < py.size(); i++) {
        if (px[i] == py[i])
            lcm = px[i];
        else
            break;
    }
    cout << lcm << endl;

}
/*
13
1 2
1 3
1 13
2 5
5 6
5 7
5 8
8 12
3 4
4 9
4 10
10 11
6 7
*/  