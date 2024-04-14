#include<bits/stdc++.h>
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
	int t;
	cin >> t;
	while (t--) {
		string s;
		long long int n , i, k, d, p = 0;
		cin >> n >> k >> s;

		// max = s;
		string max = " ";
		for (i = 0; i < n; i++) {
			if (max < s) {
				d = i ;
				max = s;
			}
			else if (max == s) {
				p = i - d;
				break;
			}

			char tem = s[0];
			s.erase(s.begin());
			s = s + tem;
		}
		if (p == 0) {
			cout << d + (k - 1)*n << endl;
		}
		else
			cout << d + (k - 1)*p << endl;
	}
	return 0;

}