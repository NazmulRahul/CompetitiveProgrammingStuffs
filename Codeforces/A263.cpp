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
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++) {
			cin >> n;
			if (n == 1) {
				cout << abs(i - 3) + abs(j - 3) << endl;
				return 0;
			}
		}
	return 0;
}