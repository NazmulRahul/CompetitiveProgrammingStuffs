#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
#define endl '\n'
#define print(b)    for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fastio      ios::sync_with_stdio(false);cin.tie(0);
#define pp  pair<int,int>
#define pb push_back
#define popb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair

const int N = 1e9 + 7;
void solve() {
    int n, k;
    cin >> n >> k;
    // string s;
    // while (k > 0) {
    //     if (k % 2)
    //         s += "1";
    //     else
    //         s += "0";
    //     k >>= 1;
    // }
    // reverse(s.begin(), s.end());
    // int cnt = s.size() - 1;
    ll ans = 0;
    ll c = 1;
    for (int i = 0; i < 32; i++) {
        if (k & (1 << i)) {
            ans = (ans + c) % N;
        }
        c *= n;
        c %= N;
    }
    cout << ans << endl;

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