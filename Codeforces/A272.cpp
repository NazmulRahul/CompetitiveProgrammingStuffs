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
	cin >> n;
	int ans = 0, count = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		count += x;
	}
	for (int i = 1; i <= 5; i++) {
		if ((count + i) % (n + 1) != 1)
			ans++;
	}
	cout << ans;
	return 0;
}