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
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	int abc = 0;
	vector < pair<int, char>>vec(q);
	for (auto &i : vec)
		cin >> i.first >> i.second;
	for (int i = 2; i < s.size(); i++)
		if (s[i - 2] == 'a' && s[i - 1] == 'b' && s[i] == 'c')
			abc ++;
	for (int i = 0; i < q; i++) {
		int j = vec[i].first, cnt = 0;
		if (s[j - 1] == 'a') {
			if (s[j] == 'b' && s[j + 1] == 'c')
				cnt = 1;
		}
		if (s[j - 1] == 'b') {
			if (s[j - 2] == 'a' && s[j] == 'c')
				cnt = 1;
		}
		if (s[j - 1] == 'c') {
			if (s[j - 2] == 'b' && s[j - 3] == 'a')
				cnt = 1;
		}
		if (cnt == 1 && vec[i].second != s[j - 1]) {
			abc--; cnt = 0;
		}
		s[j - 1] = vec[i].second;
		if (cnt == 0) {
			if (vec[i].second == 'a') {
				if (s[j] == 'b' && s[j + 1] == 'c')
					abc++;
			}
			else if (vec[i].second == 'b') {
				if (s[j - 2] == 'a' && s[j] == 'c')
					abc++;
			}
			else if (vec[i].second == 'c') {
				if (s[j - 2] == 'b' && s[j - 3] == 'a')
					abc++;
			}
		}


		(abc > 0) ? cout << abc : cout << 0;
		cout << endl;
	}

	return 0;
}