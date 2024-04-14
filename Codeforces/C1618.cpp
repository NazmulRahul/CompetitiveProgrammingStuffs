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
	ll n, gcde = 0, gcdo = 0;
	cin >> n;
	vector<ll>arr(n);
	for (auto &i : arr)
		cin >> i;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)
			gcde = __gcd(gcde, arr[i]);
		else
			gcdo = __gcd(gcdo, arr[i]);
	}
	bool even = true, odd = true;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			if (arr[i] % gcdo == 0)
				odd = false;
		}
		else {
			if (arr[i] % gcde == 0)
				even = false;
		}

	}
	if (even)cout << gcde;
	else if (odd)cout << gcdo;
	else
		cout << 0;
	cout << endl;

}

int main() {
	fastio;
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