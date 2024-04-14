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
bool kal(ll ara[], int x, int n) {
	ll m[200001];
	ll cnt = 0;
	for (ll j = 0; j < n; j++) {
		if (ara[j] != x) {
			m[cnt++] = ara[j];
		}
	}
	for (ll j = 0; j < cnt; j++) {
		if (m[j] != m[cnt - 1 - j]) {
			return false;
		}
	}
	return true;
}
void solve() {
	ll n;
	cin >> n;
	ll ara[n];
	for (ll i = 0; i < n; i++) {
		cin >> ara[i];
	}
	if (n == 1 || n == 2) {
		cout << "YES" << endl;
		return;
	}
	for (ll i = 0; i < n; i++) {
		if (ara[i] != ara[n - 1 - i]) {
			if (kal(ara, ara[i], n)) {
				cout << "YES" << endl;
				return;
			}
			if (kal(ara, ara[n - 1 - i], n)) {
				cout << "YES" << endl;
				return;
			}
			cout << "NO" << endl;
			return;

		}
	}
	cout << "YES" << endl;

}

int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int t, cnt = 0;
	cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}