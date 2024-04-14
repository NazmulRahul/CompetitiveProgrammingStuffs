#include <bits/stdc++.h>
#define rep(i,n)    for(int i=0;i<(n);++i)
#define repA(i,k,n) for(int i=k;i<=(n);++i)
#define repD(i,k,n)	for(int i=k;i>=(n);--i)
#define endl '\n'
#define print(b)	for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fin    		freopen("C:\\Users\\Nazmul Rahul\\Desktop\\cp\\in.txt", "r++", stdin)
#define fout   		freopen("C:\\Users\\Nazmul Rahul\\Desktop\\cp\\out.txt", "w++", stdout)
#define fastio    	ios::sync_with_stdio(false)
#define max(a,b)	((a)>(b)?(a):(b))
#define min(a,b)	((a)<(b)?(a):(b))
#define pb    		push_back
#define pob   		pop_back
#define ll 			long long int
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	ll t, n;
	cin >> t;
	while (t-- ) {
		cin >> n;
		ll a = n;
		vector<ll>vec;
		vector<ll>ans;
		map<int, int>prime;
		while (n % 2 == 0) {
			prime[2]++;
			vec.push_back(2);
			n = n / 2;
		}
		int max = 2;

		for (int i = 3; i <= sqrt(n); i = i + 2) {
			while (n % i == 0) {
				prime[i]++;
				n = n / i;
				vec.push_back(i);
			}
			if (prime[i] > prime[max])max = i;
		}
		if (n > 2) {
			vec.push_back(n);
			prime[n]++;
		}
		if (n == a) {
			cout << 1 << endl << n << endl;
			continue;
		}

		cout << prime[max] << endl;

		for (int i = 1; i < prime[max]; i++)
			cout << max << " ";
		ll sol = max;
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] != max)	sol *= vec[i];
		}
		cout << sol << endl;


	}
	return 0;
}