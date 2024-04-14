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
// const ll N = 1e9 + 1;

void solve() {
	ll n, h, l, ch, cl, ans;
	cin >> n;
	int cnt = 0;
	while (n--) {
		ll x, y, c;
		cin >> x >> y >> c;
		if (cnt == 0) {
			cout << c << endl;
			h = y; l = x; ch = c; cl = c; ans = c; cnt++; continue;
		}
		if (x <= l or y >= h) {
			if (x == l and y == h) {
				ans = min(ans, c);
				cl = ans, ch = ans;
				cout << ans;
			}
			else if (x == l and y > h) {
				ans = c;
				cl = c; ch = c;
			}
			else if (x<l and y>h) {
				ans = c; l = x; h = y;
				cl = c; ch = c;
				cout << ans;
			}
			else if (x < l and y <= h) {
				l = x;
				ans += c;
				cout << ans;
			}
			else if (x >= l and y > h) {
				h = y;
				ans += c;
				cout << ans;
			}
		}
		else
			cout << ans;
		cout << endl;
	}
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