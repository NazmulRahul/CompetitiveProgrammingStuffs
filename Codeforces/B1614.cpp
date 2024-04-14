#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define endl '\n'
#define print(b)    for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fin freopen("D://input.txt", "r", stdin)
#define fout freopen("D://output.txt", "w", stdout)
#define fastio        ios::sync_with_stdio(false)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
using namespace std;
void solve() {
	ll n;
	vector<pair<ll, ll>>vec;
	cin >> n;
	ll ans[200001];
	for (ll i = 1; i <= n; i++) {
		ll j;
		cin >> j;
		vec.pb(mp(j, i));
	}
	sort(vec.begin(), vec.end(), greater<pair<ll, ll>>());
	ll count = 0;
	ll s = 1, p = 1;
	for (auto i : vec) {
		if (p % 2 != 0 && p != 1) {
			s++;
			count += 2 * i.first * s;
			p++; continue;
		}
		count += 2 * i.first * s;
		p++;
	}
	cout << count << endl;
	s = 0; p = 0;
	count = 1;
	for (auto i : vec) {
		if (count % 2 != 0) {
			ans[i.second] = s + 1;
			s++;
			count++;
		}
		else {
			ans[i.second] = p - 1;
			p--;
			count++;
		}
	}
	cout << 0 << " ";
	for (int i = 1; i <= n; i++) {
		cout << ans[i] << ' ';
	}
	cout << endl;
}



int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}