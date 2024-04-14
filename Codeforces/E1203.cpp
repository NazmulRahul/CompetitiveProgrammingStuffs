#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
const int N = 1e6;
int ara[N];
int main() {
	int n;
	cin >> n;
	vector<int>vec(n);
	for (auto &i : vec) {
		cin >> i;
		ara[i]++;
	}
	sort(vec.begin(), vec.end(), greater<int>());
	int ans = 1, cur = vec[0] + 1;
	for (int i = 1; i < n; i++) {
		if (vec[i] + 1 < cur) {
			ans++; cur = vec[i] + 1;
		}
		else if (vec[i] + 1 == cur) {
			ans++; cur = vec[i];
		}
		else if (vec[i] == cur and vec[i] != 1) {
			ans++; cur = vec[i] - 1;
		}
	}
	cout << ans << endl;

	return 0;
}