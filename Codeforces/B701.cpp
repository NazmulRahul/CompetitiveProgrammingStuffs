#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
const int inf = 1e6 + 1;
int row[inf], col[inf];
ll max(ll a, ll b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int main() {
	ll n, m;
	cin >> n >> m;
	ll ans = n * n;
	int rcnt = 0, ccnt = 0;
	while (m--) {
		int r, c;
		cin >> r >> c;
		if (row[r] == 0) {
			row[r] = 1;
			ans = ans - n + ccnt;
			// cout << max(0, ans) << endl;
			rcnt++;
		}
		if (col[c] == 0) {
			col[c] = 1;
			ans = ans - n + rcnt;
			ccnt++;
		}
		cout << max(0, ans) << endl;

	}

	return 0;
}