#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
#define endl '\n'
#define print(b)    for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fastio        ios::sync_with_stdio(false)
#define pp 	pair<int,int>
#define pb push_back
#define pop pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair


void solve() {
	int n;
	cin >> n;
	for (int i = 2; i < n; i++) {
		if (__gcd(n - 1 - i, i) == 1) {
			cout << (n - 1 - ) << ' ' << i << ' ' << 1 << endl;
			return;
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
//    fin;
//    fout;
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}