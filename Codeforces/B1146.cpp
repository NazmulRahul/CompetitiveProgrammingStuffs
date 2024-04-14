#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

int main() {
	string s;
	cin >> s;
	string tem, tem2;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != 'a')
			tem.push_back(s[i]);
	}
	int n = tem.size() / 2;
	// for (int i = 0; i < s.size() - n; i++)
	// 	tem2.push_back(s[i]);
	tem2 = s.substr(0, s.size() - n);
	cout << tem2 << endl;	string ans = tem2;
	// for (int i = 0; i < n; i++)
	// 	tem2.push_back(tem[i]);
	tem2 += tem.substr(0, n );
	if (tem2 == s and !(tem.size() % 2)) {
		cout << ans << endl;
	}
	else
		cout << ":(" << endl;

	return 0;
}