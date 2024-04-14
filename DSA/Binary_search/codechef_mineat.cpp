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
ll n, h; vector<ll>vec;
bool comp(ll x) {
	ll cnt = 0;
	for (int i = 0; i < n; i++) {
		ll tem = vec[i] / x;
		if (tem * x == vec[i])
			cnt += tem;
		else
			cnt += (tem + 1);
	}
	return cnt <= h;
}
void solve() {
	cin >> n >> h;
	vec.clear();
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		vec.push_back(x);
	}
	ll hi = 1e9, lo = 1;
	ll mid;
	while (hi - lo > 1) {
		mid = lo + (hi - lo) / 2;
		if (comp(mid)) {
			hi = mid;
		}
		else
			lo = mid + 1;
	}
	if (comp(lo))
		cout << lo << endl;
	else
		cout << hi << endl;

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