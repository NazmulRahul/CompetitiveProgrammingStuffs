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

void solve() {
    string s;
    cin >> s;
    int z = 0, o = 0;
    int l = s.length();
    vector<int>cnt(l + 10);
    int c = 0;
    for (int i = 0; i < l; i++) {
        if (s[i] == '0') {
            z++;
            cnt[c]++;
        }
        else {
            o++;
            c++;
            cnt[c] = cnt[c - 1];
        }
    }
    int lo = 0, hi = o;
    while (lo <= hi) {
        bool ok = false;
        int mid = lo + (hi - lo) / 2;
        int zc = 0, oc = 0;
        for (int i = l - 1; i > 0; i--) {
            if (s[i] == '1')
                oc++;
            else
                zc++;
            if (oc > mid)
                break;
            if (z - (zc + cnt[mid - oc]) <= mid)
                ok = true;

        }
        if (z - cnt[mid] <= mid)
            ok = true;
        if (ok)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    cout << lo << endl;
}

int main() {
    FASTIO

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}