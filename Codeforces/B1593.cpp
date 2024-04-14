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
using namespace std;

void solve() {
	string str;
	int e = 0;
	cin >> str;
	int len = str.length();
	int ans = 100;
	int cnt = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (str[i] == '5' && e == 0) {
			e = 1;
			continue;
		}
		if (str[i] == '2' && e == 1) {
			ans = min(ans, cnt);

			break;
		}
		cnt++;
	}
	cnt = 0;
	e = 0;

	for (int i = len - 1; i >= 0; i--) {
		if (str[i] == '0' && e == 0) {
			e = 1;
			continue;
		}
		if (str[i] == '5' && e == 1) {
			ans = min(ans, cnt);
			break;
		}
		cnt++;
	}
	cnt = 0;
	e = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (str[i] == '5' && e == 0) {
			e = 1;
			continue;
		}
		if (str[i] == '7' && e == 1) {
			ans = min(ans, cnt);
			break;
		}
		cnt++;
	}
	cnt = 0;
	e = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (str[i] == '0' && e == 0) {
			e = 1;
			continue;
		}
		if (str[i] == '0' && e == 1) {
			ans = min(ans, cnt);
			break;
		}
		cnt++;
	}
	cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}
/*5
100
71345
3259
50555
2050047


0
3
1
3
2

#include <bits/stdc++.h>

using namespace std;

const string subseqs[] = { "00", "25", "50", "75" };

const int INF = 100;

int solve(string& s, string& t)
{
	int sptr = s.length() - 1;

	int ans = 0;
	while (sptr >= 0 && s[sptr] != t[1])
	{
		sptr--;
		ans++;
	}

	if (sptr < 0) return INF;

	sptr--;

	while (sptr >= 0 && s[sptr] != t[0])
	{
		sptr--;
		ans++;
	}

	return sptr < 0 ? INF : ans;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string n;
		cin >> n;

		int ans = INF;
		for (auto e : subseqs)
			ans = min(ans, solve(n, e));

		cout << ans << '\n';
	}

	return 0;
}


*/

