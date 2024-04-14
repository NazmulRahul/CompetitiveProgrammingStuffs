#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int phi[1000000], mark[1000000];
void sievephi(int n) {
	for (int i = 1; i <= n; i++)phi[i] = i;

	phi[1] = 1;
	mark[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (!mark[i]) {
			for (int j = i; j <= n; j += i) {
				mark[j] = 1;
				phi[j] = phi[j] / i * (i - 1);
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	int cnt = 1;
	sievephi(n);
	for (int i = 1; i <= n; i++) {
		cout << i << " " << phi[i] << endl;
	}

	return 0;
}