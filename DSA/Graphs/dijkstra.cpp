#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         ld;

#define int                 long long
#define endl                '\n'
#define gap                 ' '
#define dbg(x)              cout<<#x<<" = "<<x<<'\n'
#define print(b)            for(auto &a:b) cout<<a<<' ';
#define printN(b)           for(auto &a:b) cout<<a<<endl;
#define ALL(r)              (r).begin(),(r).end()
#define FASTIO              ios::sync_with_stdio(false);cin.tie(NULL);
#define popcount            __builtin_popcount
#define popcountll          __builtin_popcountll
#define clz                 __builtin_clz
#define ffs                 __builtin_ffs
const int N = 1e5 + 5;
int inf = 1e18;
#include <bits/stdc++.h>
using namespace std;

#define int                 long long
#define double              long double
#define endl                '\n'
#define gap                 ' '
#define dbg(x)              cout<<#x<<" = "<<x<<'\n'
#define print(b)            for(auto &a:b) cout<<a<<' ';
#define ALL(r)              (r).begin(),(r).end()
#define FASTIO              ios::sync_with_stdio(false);cin.tie(NULL);
int mod = 1e9 + 7;
const int N = 1e5 + 10, inf = 1e18;
vector<pair<int, int>>grapha[N], graphb[N];
vector<int>patha(N, inf), pathb(N, inf);
int vis[N];
void dijkstra(int source, vector<pair<int, int>>*graph, vector<int>&path) {
    multiset<pair<int, int>>pii;
    path[source] = 0;
    pii.insert({0, source});
    while (pii.empty() == 0) {
        auto it = *pii.begin();
        int p = it.second, t = it.first;
        pii.erase(pii.begin());
        if (vis[p]) {
            continue;
        }
        vis[p] = 1;
        for (auto i : graph[p]) {
            int child = i.first, tt = i.second;
            if (t + tt < path[child]) {
                path[child] = t + tt;
                pii.insert({path[child], child});
            }
        }
    }
}
void solve() {
    int n, m, k, s, t;
    cin >> n >> m >> k >> s >> t;
    for (int i = 0; i < m; i++) {
        int x, y, z; cin >> x >> y >> z;
        grapha[x].push_back({y, z});
        graphb[y].push_back({x, z});
    }
    memset(vis, 0, sizeof(vis));
    dijkstra(s, grapha, patha);
    memset(vis, 0, sizeof(vis));
    dijkstra(t, graphb, pathb);
    int ans = patha[t];
    // dbg(ans);
    for (int i = 0; i < k; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        ans = min(ans, z + min(patha[x] + pathb[y], patha[y] + pathb[x]));

    }
    if (ans == inf) {
        cout << "-1\n";
    } else {
        cout << ans << endl;
    }
    for (int i = 0; i <= n; i++) {
        grapha[i].clear();
        graphb[i].clear();

        patha[i] = pathb[i] = inf;
    }

}

signed main() {
    FASTIO
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
void dijkstra(int source) {
    multiset<pair<int, int>>pii;
    path[source] = 0;
    pii.insert({0, source});
    pre[source] = -1;
    while (pii.empty() == 0) {
        auto it = *pii.begin();
        int p = it.second, t = it.first;
        pii.erase(pii.begin());
        if (vis[p]) {
            continue;
        }
        vis[p] = 1;
        for (auto i : graph[p]) {
            int child = i.first, tt = i.second;
            if (t + tt < path[child]) {
                pre[child] = p;
                path[child] = t + tt;
                pii.insert({path[child], child});
            }
        }
    }
}
signed main() {
    FASTIO

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        graph[x].push_back({y, z});
        graph[y].push_back({x, z});
    }
    dijkstra(1);
    vector<int>ans;
    int i = n;
    if (path[n] == inf) {
        cout << -1 << endl; return 0;
    }
    while (i != -1) {
        ans.push_back(i);
        i = pre[i];
    }
    reverse(ALL(ans));
    print(ans); cout << endl;
    return 0;
}