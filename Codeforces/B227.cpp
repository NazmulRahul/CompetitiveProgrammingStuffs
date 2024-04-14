#include <bits/stdc++.h>
#define endl '\n'
#define fin freopen("D://input.txt", "r", stdin)
#define fout freopen("D://output.txt", "w", stdout)

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int n, m;
	cin >> n;
	int a[100000];
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a[x] = i;
	}
	cin >> m;
	long long v = 0, p = 0;
	while (m--) {
		int x;
		cin >> x;
		v += a[x];
		p += (n - a[x] + 1);
	}
	cout << v << " " << p << endl;

	return 0;
}