// #include <bits/stdc++.h>
// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double lld;
// #define endl '\n'
// #define fin freopen("D://input.txt", "r", stdin)
// #define fout freopen("D://output.txt", "w", stdout)

// using namespace std;

// int main() {
// #ifndef ONLINE_JUDGE
// 	fin;
// 	fout;
// #endif
// 	ll n;
// 	cin >> n;
// 	cout << n << " " << 0 << " " << 0 << endl;


// 	return 0;
// }
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
using namespace std;
int main() {
	int n;
	cin >> n;
	int five = 0, zero = 0;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		(j == 5) ? five++ : zero++;
	}
	if (zero == 0) {
		cout << -1 << endl;
		return 0;
	}
	if (five < 9) {
		cout << 0 << endl;
		return 0;
	}
	five = (five / 9) * 9;
	while (five--) {
		cout << 5;
	}
	while (zero--) {
		cout << 0;
	}
	cout << endl;

	return 0;
}