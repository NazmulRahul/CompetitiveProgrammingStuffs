#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
#define endl '\n'
#define print(b)    for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fastio      ios::sync_with_stdio(false);cin.tie(0);
#define pp 	pair<int,int>
#define pb push_back
#define popb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair


void solve() {
	int n, m;
	cin >> n >> m;
	string s[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (s[i][m - 1] != 'D')
			cnt++;
	}
	for (int i = 0; i < m; i++) {
		if (s[n - 1][i] != 'R')
			cnt++;
	}
	cout << cnt - 2 << endl;
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