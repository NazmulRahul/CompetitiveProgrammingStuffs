#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
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
	int week[7];
	cin >> n;
	for (int j = 0; j < 7; j++)
		cin >> week[j];
	int total = week[0];
	int i = 0;
	while (total < n) {
		i++;
		i %= 7;
		total += week[i];

	}
	cout << i + 1 << endl;

	return 0;
}