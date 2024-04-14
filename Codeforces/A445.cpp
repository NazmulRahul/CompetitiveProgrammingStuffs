#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define endl '\n'
#define fastio    	ios::sync_with_stdio(false)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
#define fin freopen("D://input.txt", "r", stdin)
#define fout freopen("D://output.txt", "w", stdout)
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int n, m;
	cin >> n >> m;
	char str[n][m + 1];
	for (auto &i : str)
		cin >> i;
	char ans[n][m + 1];
	for (int i = 0; i < n; i++) {
		bool c = true, d = true;
		for (int j = 0; j < m ; j++) {
			if (!(i % 2)) {
				if (str[i][j] != '-') {
					if (c) {
						ans[i][j] = 'W'; c = false;
					}
					else {
						ans[i][j] = 'B'; c = true;
					}
				}
				else {
					ans[i][j] = '-';
					c = !c;
				}

			}
			else {
				if (str[i][j] != '-') {
					if (d) {
						ans[i][j] = 'B'; d = false;
					}
					else {
						ans[i][j] = 'W'; d = true;
					}
				}
				else {
					ans[i][j] = '-';
					d = !d;
				}

			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << ans[i][j];
		cout << endl;
	}

	return 0;
}