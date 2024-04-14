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
int ara[1000];
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		ara[s[i]]++;
	}
	int odd = 0;
	for (int i = 0; i < s.length(); i++) {
		if (ara[s[i]] > 0 and ara[s[i]] % 2 != 0) {
			odd++;
			ara[s[i]] = 0;
		}
	}
	if (odd == 0 or odd % 2 != 0) {
		cout << "First" << endl;
	}
	else
		cout << "Second" << endl;

	return 0;
}