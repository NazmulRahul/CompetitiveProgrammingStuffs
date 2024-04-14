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
	ll t;
	cin >> t;
	while (t--) {
		ll n, l, r, k;
		cin >> n >> l >> r >> k;
		vector<ll>vec;
		ll j;
		for (int i = 0; i < n; i++) {
			cin >> j;
			if (j >= l && j <= r) {
				vec.push_back(j);
			}
		}
		sort(vec.begin(), vec.end());
		ll total = 0, cnt = 0;
		for (auto i : vec) {
			total += i;

			if (total >= k) {
				if (total == k) {
					cnt++; break;
				}
				break;
			}
			cnt++;
		}
		cout << cnt << endl;

	}
	return 0;
}