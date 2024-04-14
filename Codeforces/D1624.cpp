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
#define pp     pair<int,int>
#define pb push_back
#define popb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair

void solve() {
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    map<char, int>m;
    for (int i = 0; i < n; i++) {
        m[s[i]]++;
    }
    int odd = 0, even = 0;
    for (auto &i : m) {
        if (i.second & 1) {
            odd ++;
            even += (i.second - 1);
        }
        else
            even += i.second;
    }
    int cnt = 0;
    if (k <= (even / 2)) {
        cnt = even / k;
        if ((cnt * k) != even)
            odd += (even - (cnt * k));
        if (odd >= k and !(cnt & 1))
            cnt++;
        cout << cnt << endl;
        return;
    }
    if (k > (even / 2)) {
        cnt = 1;
        cout << cnt << endl; return;
    }

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