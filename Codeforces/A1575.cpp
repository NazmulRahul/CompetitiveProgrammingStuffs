#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define fastio ios::sync_with_stdio(false);cin.tie(0);
int cnt = 1;
int n, m;
bool comp(string &a, string &b) {
    for (int i = 0; i < m; i++) {
        if (a[i] != b[i]) {
            if (i % 2)
                return a[i] > b[i];
            else
                return a[i] < b[i];
        }
    }
    return 1;
}
int main() {
    fastio
    cin >> n >> m;
    vector<string>vec(n);
    for (auto &i : vec)
        cin >> i;
    map<string, int>m;
    for (auto &i : vec)
        m[i] = cnt++;
    sort(vec.begin(), vec.end(), comp);
    for (auto &i : vec) {
        cout << m[i] << endl;
    }
    return 0;
}