#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define endl '\n'
#define fin freopen("D://input.txt", "r", stdin)
#define fout freopen("D://output.txt", "w", stdout)

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	ll n, m;
	cin >> n >> m;
	ll tem = 0;
	ll ans = 0;
	for (int i = 1; i <= m; i++) {
		ll x;
		cin >> x;
		if (tem == 0) {
			tem = x;
			ans += (x - 1);
			continue;
		}
		else if (x < tem) {
			ans += (n - tem + x);
			tem = x;
		}
		else {
			ans += (x - tem);
			tem = x;
		}

	}
	cout << ans << endl;
	return 0;
}