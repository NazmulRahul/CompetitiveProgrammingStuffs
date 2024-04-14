#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int row[300001];
int col[300001];
int main() {
	ll n, a, b;
	cin >> n >> a >> b;
	ll p, q, r, s;
	cin >> p >> q >> r >> s;
	vector<string>ans;
	string str = "";
	for (int i = 0; i < (s - r + 1); i++)
		str += '.';
	for (int i = 0; i < (q - p + 1); i++) {
		ans.push_back(str);
	}


	return 0;
}