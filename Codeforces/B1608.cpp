#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a, b;
		cin >> n >> a >> b;
		int ara[n];
		if ((a + b) > (n - 2) or abs(a - b) > 1) {
			cout << -1 << endl; continue;
		}
		int t = 0, l = 1, h = n;
		t = (a > b);
		for (int i = 0; i < n; i++) {
			if (t) {
				ara[i] = l;
				l++;
			}
			else {
				ara[i] = h;
				h--;
			}
			if (i < (a + b))
				t ^= 1;

		}
		// for (int i = 1; i <= n; ++i) {
		// 	ara[i - 1] = i;
		// }
		// int i;
		// if (a >= b ) {
		// 	i = n - 1;
		// 	if (b == a and a > 0)
		// 		swap(ara[0], ara[1]);
		// 	while (a > 0) {
		// 		swap(ara[i], ara[i - 1]); a--; i -= 2; b--;
		// 	}


		// }
		// else {
		// 	i = 0;
		// 	if (a == b and a > 0)
		// 		swap(ara[n - 1], ara[n - 2]);
		// 	while (b > 0) {
		// 		swap(ara[i], ara[i + 1]); b--; a--; i += 2;
		// 	}

		// }
		for (auto i : ara)
			cout << i << " ";
		cout << endl;

	}


	return 0;
}