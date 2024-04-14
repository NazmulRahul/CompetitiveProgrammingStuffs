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
	int n;
	cin >> n;
	int ara[n][5];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> ara[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 5; j++) {
			int a = 0, b = 0, c = 0;
			for (int k = 0; k < n; k++) {
				if (ara[k][i] and ara[k][j]) {
					a++; b++; c++;
				}
				else if (ara[k][i])
					a++;
				else if (ara[k][j])
					b++;
			}
			if (a >= n / 2 and b >= n / 2 and (a + b - c) == n) {
				cout << "YES" << endl; return ;
			}
			if (a < n / 2)
				break;
		}
	}
	cout << "NO" << endl;


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