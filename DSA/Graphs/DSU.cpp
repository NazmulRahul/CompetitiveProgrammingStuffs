// codeforces 1609D
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
#define ALL(r)              (r).begin(),(r).end()
#define FASTIO              ios::sync_with_stdio(false);cin.tie(NULL);
const int N = 1005;
vector<int>sz(N), parent(N);
void make(int i) {
    sz[i] = 1; parent[i] = i;
}
int find(int a) {
    if (parent[a] == a)
        return a;
    return parent[a] = find(parent[a]);
}
void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b)
        return;
    if (sz[a] < sz[b]) {
        swap(a, b);
    }
    parent[b] = a;
    sz[a] += sz[b];
    // sz[b] = 1;
}
void solve() {
    int n, d;
    cin >> n >> d;
    multiset<int>st;
    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        make(i);
        st.insert(sz[i]);
    }
    for (int i = 0; i < d; i++) {
        int a, b; cin >> a >> b;
        int pa = find(a), pb = find(b);
        if (pa != pb) {
            st.erase(st.find(sz[pa]));
            st.erase(st.find(sz[pb]));
            Union(a, b);
            st.insert(max(sz[parent[a]], sz[parent[b]]));

        }
        else {
            cnt++;
        }

        int ans = 0;
        auto it = st.end(); it--;
        for (int j = cnt; j > 0; j--) {
            ans += (*it);
            if (it == st.begin())
                break;
            it--;
        }
        cout << ans - 1 << endl;
    }
}

signed main() {
    FASTIO

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}