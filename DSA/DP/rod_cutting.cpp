#include <bits/stdc++.h>
using namespace std;
typedef long long   ll;

//#define int         long long
#define endl         '\n'
#define print(b)    for(auto &a:b) cout<<a<<' ';
#define printN(b)   for(auto &a:b) cout<<a<<endl;
#define ALL(r)      (r).begin(),(r).end()
#define FASTIO      ios::sync_with_stdio(false);cin.tie(0);
#define popcount    __builtin_popcount
#define popcountll  __builtin_popcountll
#define clz         __builtin_clz
#define ffs         __builtin_ffs

int cutRod(int price[], int n) {
    vector<int> ans(n+1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int a = 0, b = 0;
            if (i - j >= 0) {
                ans[i] = max(ans[i], ans[i - j] + price[j - 1]);
            }
        }
    }
    return ans[n];
}
signed main() {
    FASTIO
    int Price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    cout << cutRod(Price, 8) << endl;
    return 0;
}