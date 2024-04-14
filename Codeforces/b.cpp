#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         ld;

#define int                 long long
#define double              long double
#define endl                '\n'
#define gap                 ' '
#define dbg(x)              cout<<#x<<" = "<<x<<'\n'
#define print(b)            for(auto &a:b) cout<<a<<' ';
#define ALL(r)              (r).begin(),(r).end()
#define FASTIO              ios::sync_with_stdio(false);cin.tie(NULL);
int mod = 1e9 + 7;
const int N = 1e5 + 10;

void solve() {
	int n; cin >> n;
	vector<int>arr(n), mini(n);
	int ans = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int mn = arr[n - 1];
	for (int j = n - 1; j >= 0; j--) {
		mn = min(arr[j], mn);
		if (arr[j] <= mn)
			continue;
		int d = (arr[j] + mn - 1) / mn;
		mn = arr[j] / d;
		ans += (d - 1);
	}
	cout << ans << endl;

}

signed main() {
	FASTIO
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}