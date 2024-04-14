#include <bits/stdc++.h>
#define endl '\n'
#define fin freopen("D://input.txt", "r", stdin)
#define fout freopen("D://output.txt", "w", stdout)

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int n;
	string s;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> s;
		(s == "X++" || s == "++X") ? cnt++ : cnt--;
	}
	cout << cnt << endl;

	return 0;
}