#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
#define endl '\n'
#define print(b)    for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fastio        ios::sync_with_stdio(false)
#define pp 	pair<int,int>
#define pb push_back
#define pop pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair


void solve() {
	string s, t;
	cin >> s >> t;
	int l = s.length();
	int tem = 0;
	map<char, int>count;
	for (int i = 0; i < l; i++) {
		if (s[i] == t[1]) {
			tem++;
		}
		count[s[i]]++;

	}
	int check = 0;
	if (count[t[0]] == 0 or count[t[1]] == 0 or count[t[2]] == 0 or t[1] == 'a' or t[1] == 'c' ) {
		for (auto i : count) {
			int c = i.second;
			while (c--)
				cout << i.first;
		}
	}
	else {
		for (auto i : count) {
			if (i.first == t[2])
				check = 1;
			if (i.first == t[1] and check == 0 ) {

				// check = 1;
				continue;
			}

			int c = i.second;
			while (c--)
				cout << i.first;
			if (check) {
				while (tem--)
					cout << t[1];
				check = 0;
			}
		}
	}
	cout << endl;
}

int main() {
#ifndef ONLINE_JUDGE
//    fin;
//    fout;
#endif
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}