#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define endl '\n'
#define print(b)    for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fin freopen("D://input.txt", "r", stdin)
#define fout freopen("D://output.txt", "w", stdout)
#define fastio        ios::sync_with_stdio(false)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int n, m;
	cin >> n >> m;
	double t;
	double max = 0;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		if (ceil(t / m) >= max) {
			ans = i;
			max = ceil(t / m);

		}

	}

	cout << ans << endl;


	return 0;
}


