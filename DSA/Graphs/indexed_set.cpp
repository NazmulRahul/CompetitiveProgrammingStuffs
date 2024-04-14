#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
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

void solve() {
    // int n, x;
    indexed_set s;
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(9);
    auto x = s.find_by_order(1);
    cout << *x << "\n";
    cout << s.order_of_key(9);

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