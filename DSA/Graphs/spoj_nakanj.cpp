    #include <bits/stdc++.h>
    using namespace std;

    typedef long long           ll;
    typedef unsigned long long  ull;
    typedef long double         ld;

    //#define int                 long long
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
    int x[] = {1, 1, -1, -1, 2, 2, -2, -2};
    int y[] = {2, -2, 2, -2, 1, -1, 1, -1};
    int vis[9][9], level[9][9];
    void bfs(int l, int r) {
        level[l][r] = 1;
        queue<pair<int, int>>q;
        q.push({l, r});
        while (!q.empty()) {
            int curx = q.front().first;
            int cury = q.front().second;
            q.pop();
            for (int i = 0; i < 8; i++) {
                int a = curx + x[i];
                int b = cury + y[i];
                if (a > 0 and a<9 and b>0 and b < 9 and level[a][b] == 0) {
                    level[a][b] = level[curx][cury] + 1;
                    q.push({a, b});
                }
            }

        }
    }
    void solve() {
        string a, b;
        cin >> a >> b;
        int x = a[0] - 96, y = a[1] - '0', fx = b[0] - 96, fy = b[1] - '0';
        bfs(x, y);
        cout << level[fx][fy] - 1 << endl;
        memset(level, 0, sizeof(level));
 
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