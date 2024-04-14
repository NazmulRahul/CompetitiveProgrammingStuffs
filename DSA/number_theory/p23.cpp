#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<bool>mark(1000001);
void sieve() {
	ll n = 1000001;
	long long i, j, limit;
	limit = sqrt(n) + 1;
	mark[1] = true;
	for (long long i = 4; i <= n; i += 2) {
		mark[i] = true;
	}
	// prime[nprime++] = 2;
	for (i = 3; i <= n; i += 2) {
		if (!mark[i]) {
			// prime[nprime++] = i;
			if (i <= limit) {
				for (j = i * i; j <= n; j += (i * 2))
					mark[j] = true;
			}
		}
	}
}
int main() {
	int n;
	cin >> n;

	vector<ll>num(n + 1);

	for (auto &i : num)
		cin >> i;
	sieve();
	for (int i = 0; i < n; i++) {
		if (sqrt(num[i]) == floor(sqrt(num[i]))) {

			if (mark[sqrt(num[i])] == 0)
				cout << "YES";
			else
				cout << "NO";
			cout << endl;
			continue;
		}
		cout << "NO" << endl;
	}


	return 0;
}