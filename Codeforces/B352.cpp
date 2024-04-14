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
int pos[200001];
int pos2[200001];
int check[200001];
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int x;
	cin >> x;


	int ara[x + 1];
	for (int i = 0; i < x; i++) {
		cin >> ara[i];
		if (check[ara[i]] == 0) {
			check[ara[i]] = 1;
			pos[ara[i]] = i;
		}
		else if (check[ara[i]] == 1) {
			check[ara[i]] = 2;
			pos2[ara[i]] = i;
		}
		else if (check[ara[i]] > 1) {
			if ((i - pos2[ara[i]]) == pos2[ara[i]] - pos[ara[i]]) {
				pos[ara[i]] = pos2[ara[i]];
				pos2[ara[i]] = i;
			}
			else {
				check[ara[i]] = -1;
			}
		}
	}

	set<pair<int, int>>s;
	for (int i = 0; i < x; i++) {
		if (check[ara[i]] > 0) {
			if (check[ara[i]] == 1)
				s.insert(mp(ara[i], 0));
			else
				s.insert(mp(ara[i], pos2[ara[i]] - pos[ara[i]]));
		}
	}
	cout << s.size() << endl;
	for (auto i : s)
		cout << i.first << " " << i.second << endl;
	return 0;
}