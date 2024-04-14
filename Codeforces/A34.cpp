#include <bits/stdc++.h>
using namespace std;

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
	map<int, int>pre, suf;
	int sum = 0, tem = 0;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		int x; x = arr[i];
		suf[x]++;
		sum += x;
	}
	if (sum & 1) {
		cout << "NO\n";
	}
	else {
		for (int i = 0; i < n; i++) {

			if (tem == sum / 2 or (tem < sum / 2 and suf[sum / 2 - tem]) or (tem > sum / 2 and pre[tem - sum / 2])) {
				cout << "YES\n"; return;
			}
			tem += arr[i];
			suf[arr[i]]--;
			pre[arr[i]]++;
		}
	}
	cout << "NO\n";
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