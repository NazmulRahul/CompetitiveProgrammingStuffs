#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll s_prime;
void simple_sieve(ll n, vector<ll>& prime) {
	bool mark[n + 1];
	memset(mark, false, sizeof(mark));
	for (int i = 4; i <= n; i += 2) {
		mark[i] = 1;
	}
	for (int i = 2; i <= n; i ++) {
		if (!mark[i]) {
			prime.push_back(i);
			for (int j = i * i; j <= n; j += i) {
				mark[j] = 1;
			}
		}
	}

}
void segment_sieve(ll l, ll h) {
	ll lim = floor(sqrt(h )) + 1;
	vector<ll>prime;
	simple_sieve(lim, prime);//find all prime within sqrt of high limti
	ll n = h - l + 1;
	bool mark[n + 1];
	memset(mark, false, sizeof(mark));
	for (auto i : prime) {
		int low = floor(l / i) * i; // low == l or low>l then it's in low->high range
		if (low < l or low == i)
			low += i;
		for ( int j = low; j <= h; j += i) {
			if (j != i) {
				mark[j - l] = true;
			}
		}

	}
	for (int i = l; i <= h; i++) {
		if (!mark[i - l]) {
			cout << i << " ";
		}
	}
	cout << endl;

}
int main() {
	ll low, high;
	cin >> low >> high;
	segment_sieve(low, high);


	return 0;
}