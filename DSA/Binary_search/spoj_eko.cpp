#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define fastio ios::sync_with_stdio(false);cin.tie(0);
const int N = 1e6 + 10;
ll inf = 1e9;
ll n, m;
ll ara[N];
bool comp(ll h) {
    ll length = 0;
    for (int i = 0; i < n; i++) {
        if (ara[i] > h)
            length += (ara[i] - h);
    }
    return length >= m;
}
int main() {
    fastio
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    ll lo = 0, hi = inf;
    ll mid;
    while (hi - lo > 1) {
        mid = (hi + lo) / 2;
        if (comp(mid)) {
            lo = mid;
        }
        else
            hi = mid - 1;
    }
    if (comp(hi))
        cout << hi << endl;
    else
        cout << lo << endl;
    return 0;
}