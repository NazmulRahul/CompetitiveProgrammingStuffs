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
	char c;
	cin >> c;
	int pos[n + 1], cnt = 0;
	string s;
	cin >> s;
	bool change = false;
	for (int i = 0; i < n; i++) {
		if (s[i] != c)
			change = true;
		else
			pos[cnt++] = i + 1;
	}
	if (!change)
		cout << 0 << endl;
	else {
		for (int i = 0; i < cnt; i++) {
			bool ans = true;
			for (int j = pos[i] * 2; j <= n; j += pos[i]) {
				ans &= (s[j - 1] == c);
			}
			if (ans) {
				cout << 1 << endl << pos[i] << endl; return;
			}
		}
		cout << 2 << endl << n << " " << n - 1 << endl;

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