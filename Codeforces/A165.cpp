#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define endl '\n'
#define fin freopen("D://input.txt", "r", stdin)
#define fout freopen("D://output.txt", "w", stdout)

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int n;
	int x[201], y[201];
	int u, d, l, r, ans = 0;
	// u = d = l = r = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n ; i++) {
		u = d = l = r = 0;
		for (int j = 0; j < n; j++) {
			if (x[i] > x[j] and y[i] == y[j])
				l = 1;
			if (x[i] < x[j] and y[i] == y[j])
				r = 1;
			if (y[i] > y[j] and x[i] == x[j])
				d = 1;
			if (y[i] < y[j] and x[i] == x[j])
				u = 1;
		}
		if (l and r and u and d)
			ans++;
	}
	cout << ans << endl;
	return 0;
}