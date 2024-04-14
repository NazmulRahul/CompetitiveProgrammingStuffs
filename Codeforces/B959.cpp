#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define fastio ios::sync_with_stdio(false);cin.tie(0);

int main() {
    fastio
    int n, k, m;
    cin >> n >> k >> m;
    // unordered_map<int,int>cost;
    vector<string>vec(n);
    for (auto &i : vec)
        cin >> i;
    vector<int>cost(n);
    for (auto &i : cost)
        cin >> i;
    vector<int>least_cost(k);
    unordered_map<string, int>group;
    for (int i = 0; i < k; i++) {
        int x, y, mini = 1e9 + 1;
        cin >> x;
        while (x--) {
            cin >> y;
            mini = min(mini, cost[y - 1]);
            group[vec[y - 1]] = i;

        }
        least_cost[i] = mini;
    }
    ll ans = 0;
    while (m--) {
        string tem;
        cin >> tem;
        ans += least_cost[group[tem]];
    }
    cout << ans << endl;

    return 0;
}