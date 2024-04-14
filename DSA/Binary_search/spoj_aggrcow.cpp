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
const int N = 1e5 + 10;
ll inf = 1e9;
vector<ll>vec;
ll n, c;
bool comp(ll dis) {
	int cnt = 0;
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (vec[i] - vec[k] >= dis) {
			k = i; cnt++;
		}
	}
	return cnt >= c;
}
void solve() {
	cin >> n >> c;
	vec.clear();
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		vec.push_back(x);
	}
	sort(vec.begin(), vec.end());
	ll lo = 0, hi = inf;
	ll mid;
	while (hi - lo > 1) {
		mid = (hi + lo) / 2;
		if (comp(mid)) {
			lo = mid;
		}
		else
			hi = mid - 1;

	}
	if (comp(hi))
		cout << hi << endl;
	else
		cout << lo << endl;
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