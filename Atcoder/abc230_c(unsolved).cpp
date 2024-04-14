// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int row[300001];
// int col[300001];
// int main() {
// 	ll n, a, b;
// 	cin >> n >> a >> b;
// 	ll p, q, r, s;
// 	cin >> p >> q >> r >> s;
// 	vector<string>ans;
// 	string str = "";
// 	for (int i = 0; i < (s - r + 1); i++)
// 		str += '.';
// 	for (int i = 0; i < (q - p + 1); i++) {
// 		ans.push_back(str);
// 	}
// 	ll x = max(p - a, r - b);
// 	ll y = min(q - a, s - b);
// 	for (ll i = x; i <= y; i++) {
// 		ans[a + i - p][b + i - r] = '#';
// 	}
// 	x = max(p - a, b - s);
// 	y = min(q - a, b - r);
// 	for (ll i = x; i <= y; i++) {
// 		ans[a + i - p][b - i - r] = '#';
// 	}
// 	for (auto i : ans)
// 		cout << i << endl;
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, a, b, p, q, r, s;
	cin >> n >> a >> b >> p >> q >> r >> s;

	for (ll i = p; i <= q; i++) {
		for (ll j = r; j <= s; j++) {
			if (abs(i - a) == abs(j - b)) {
				cout << '#';
			}
			else
				cout << '.';
			/*	for (long long i = p; i <= q; i++) {
			for (long long j = r; j <= s; j++) {
			if ((i - j) == (a - b))cout << '#';
			else if ((i + j) == (a + b))cout << '#';
			else cout << ".";
			}
			cout << endl;
			}*/
			// 	char ch = '.';

			// 	if ((i - a) == (j - b)) {
			// 		ll k = (i - a);

			// 		if (k >= max((1 - a), (1 - b)) and k <= min((n - a), (n - b))) {
			// 			ch = '#';
			// 		}
			// 	}

			// 	if ((i - a) == (b - j)) {
			// 		ll k = (i - a);

			// 		if (k >= max((1 - a), (b - n)) and k <= min((n - a), (b - 1))) {
			// 			ch = '#';
			// 		}
			// 	}
			// 	cout << ch;
			// }
		}
		cout << '\n';
	}

	return 0;
}