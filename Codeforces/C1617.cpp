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
int ara[200001];

void solve() {
	int n, ans = 0;;
	cin >> n;
	for (int i = 1; i <= n; ++i)
		ara[i] = 0;
	vector<int>vec;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x <= n and !ara[x]) {
			ara[x] = 1;
		}
		else
			vec.pb(x);
	}
	int cnt = 0;
	sort(vec.begin(), vec.end());
	for (int i = 1; i <= n; i++) {
		if (!ara[i]) {
			if (ceil(vec[cnt++] / 2.0) - 1 < i) {
				cout << -1 << endl; return;
			}
			else
				ans++;
		}
	}
	cout << ans << endl;

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