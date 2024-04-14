#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define endl '\n'
#define print(b)  for(auto &a:b) cout<<a<<' ';
#define printN(b) for(auto &a:b) cout<<a<<endl;
#define ALL(r) (r).begin(),(r).end()
#define fastio    ios::sync_with_stdio(false);cin.tie(0);
#define mp make_pair


void solve() {
    int n;
    cin >> n;
    int x;
    for (int i = n - 1; i >= 0; i--) {
        if (__builtin_popcount(i) == 1) {
            x = i; break;
        }
    }
    for (int i = 1; i < n; i++) {
        if (i == x) {
            cout << 0 << " " << i << " ";
        }
        else
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    fastio

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}