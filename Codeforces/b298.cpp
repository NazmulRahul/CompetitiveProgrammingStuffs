#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	ll a, b, x, y;
	cin >> t >> a >> b >> x >> y;
	char wind[t + 1];
	cin >> wind;
	for (int i = 0; i < t; i++) {
		if (wind[i] == 'E' and a < x)
			a++;

		if (wind[i] == 'W' and a > x)
			a--;
		if (wind[i] == 'N' and b < y)
			b++;
		if (wind[i] == 'S' and b > y)
			b--;
		if (a == x and b == y) {
			cout << i + 1 << endl; return 0;
		}


	}
	cout << -1 << endl;

	return 0;
}