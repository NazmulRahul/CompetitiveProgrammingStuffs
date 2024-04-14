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
    int a, b;
    cin >> a >> b;
    int maxi = b - a;
    int cnta = 1;
    int cntb = 1;
    for (int i = a; i <= b; i++) {
        if ((i | b) == b) {
            break;
        }
        else {
            cnta++;
        }
    }
    for (int i = b;; i++) {
        if ((a | i) == i) {
            break;
        }
        else {
            cntb++;
        }
    }
    if (cnta > cntb)
        swap(cnta, cntb);
    cout << min(cnta, maxi) << endl;

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