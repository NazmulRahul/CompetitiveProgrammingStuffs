#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         ld;
typedef pair<ll, ll>        pll;
typedef pair<int, int>      pii;

#define endl                '\n'
#define print(b)            for(auto &a:b) cout<<a<<' ';
#define printN(b)           for(auto &a:b) cout<<a<<endl;
#define ALL(r)              (r).begin(),(r).end()
#define FASTIO              ios::sync_with_stdio(false);cin.tie(NULL);
#define popcount            __builtin_popcount
#define popcountll          __builtin_popcountll
#define clz                 __builtin_clz
#define ffs                 __builtin_ffs
const int N = 1005;
vector<vector<int>>grid(N, vector<int>(N));
int visited[N][N];
int cnt;
int n, m;
int di[] = {1, -1, 0, 0};
int dj[] = {0, 0, 1, -1};
void dfs(int i, int j) {
    if (visited[i][j])
        return;
    visited[i][j] = 1;
    cnt++;
    for (int k = 0; k < 4; k++) {
        int x = i, y = j;
        x += di[k];
        y += dj[k];
        if (x<0 or x >= n or y<0 or y >= m)
            continue;
        if (x == i) {
            if (y > j and (grid[i][j] & 4) == 0 and (grid[x][y] & 1) == 0)
                dfs(x, y);
            if (j > y and (grid[i][j] & 1) == 0 and (grid[x][y] & 4) == 0)
                dfs(x, y);
        }
        else {
            if (x > i and (grid[i][j] & 2) == 0 and (grid[x][y] & 8) == 0)
                dfs(x, y);
            if (i > x and (grid[i][j] & 8) == 0 and (grid[x][y] & 2) == 0)
                dfs(x, y);
        }
    }
}
void solve() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    vector<int>ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j]) {
                cnt = 0;
                dfs(i, j);
                ans.push_back(cnt);
            }
        }
    }
    sort(ALL(ans), greater<int>());
    print(ans); cout << endl;
}

int main() {
    FASTIO

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}