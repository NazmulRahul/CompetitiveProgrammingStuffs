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
#define fastio              ios::sync_with_stdio(false);cin.tie(NULL);
#define popcount            __builtin_popcount
#define popcountll          __builtin_popcountll
const int N = 2e5 + 5;
ll ara[N];
ll cnt;
void merge(int l, int r, int mid) {
    int l_size = (mid - l + 1);
    int r_size = (r - mid);
    int L[l_size + 1];
    int R[r_size + 1];
    for (int i = 0; i < l_size; i++) {
        L[i] = ara[i + l];
    }
    for (int i = 0; i < r_size; i++) {
        R[i] = ara[i + mid + 1];
    }
    L[l_size] = R[r_size] = INT_MAX;
    int li = 0, ri = 0;
    for (int i = l; i <= r; i++) {
        if (L[li] <= R[ri]) {
            ara[i] = L[li++];
            // cout << ara[i] << " \"" << cnt << "\" ";
        }
        else {
            if (L[li] != INT_MAX){
                cnt += (l_size - li );
                // cnt++;
            }
            ara[i] = R[ri++];
            // cout << ara[i] << " \"" << cnt << "\" ";
        }
    }
}
void mergesort(int l, int r) {
    if (l == r)
        return;
    int mid = l + (r - l) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    merge(l, r, mid);
}

void solve() {
    int n;
    cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    mergesort(0, n - 1);
    cout << cnt << endl;

}

int main() {
    fastio

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
//1676H2 