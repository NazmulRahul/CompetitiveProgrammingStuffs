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
	ll n;
	cin >> n;
	vector<ll>vec(n);
	for (auto &i : vec)
		cin >> i;
	sort(vec.begin(), vec.end());
	ll min = 1, max = 1;
	for (int i = 1; i < n - 1; i++) {
		if (vec[i] == vec[0])
			min++;
		if (vec[n - 1 - i] == vec[n - 1])
			max++;
	}
	if (vec[0] == vec[n - 1])
		cout << 0 << " " << (n * (n - 1)) / 2 << endl;
	else
		cout << (vec[n - 1] - vec[0]) << " " << min*max << endl;

	return 0;
}