#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define endl '\n'
#define print(b)    for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fin freopen("D://input.txt", "r", stdin)
#define fout freopen("D://output.txt", "w", stdout)
#define fastio        ios::sync_with_stdio(false)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
using namespace std;

void solve() {
    int n, c;
    cin >> n;

    vector<ll>vec(n);
    ull sum = 0, t = 1;
    for (auto &i : vec)
        cin >> i;
    for (auto& i : vec) {
        while (!(i % 2)) {
            i /= 2;
            t *= 2;
        }
    }
    sort(vec.begin(), vec.end());
    vec[n - 1] *= t;
    for (auto i : vec)
        sum += i;
    cout << sum << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    fin;
    fout;
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}