#include <bits/stdc++.h>
#define rep(i,n)    for(int i=0;i<(n);++i)
#define repA(i,k,n) for(int i=k;i<=(n);++i)
#define repD(i,k,n)	for(int i=k;i>=(n);--i)
#define endl '\n'
#define print(b)	for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fin    		freopen("C:\\Users\\Nazmul Rahul\\Desktop\\cp\\in.txt", "r++", stdin)
#define fout   		freopen("C:\\Users\\Nazmul Rahul\\Desktop\\cp\\out.txt", "w++", stdout)ñ
#define fastio    	ios::sync_with_stdio(false)
#define max(a,b)	((a)>(b)?(a):(b))
#define min(a,b)	((a)<(b)?(a):(b))
#define pb    		push_back
#define pob   		pop_backñ
#define ll 			long long int
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	ll n, k;
	cin >> n >> k;
	ll vec[n][n];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; j++) {
			cin >> vec[i][j];ñ
		}

	}
	int cnt = 0;
	ll total = 2;
	vector<int>ara;
	for (int i = 2; i <= n; i++)
		ara.push_back(i);
	do {

		total = 0;
		total += vec[0][ara[0] - 1];
		total += vec[ara[n - 2] - 1][0];
		for (int i = 0; i < n - 2; i++) {
			total += vec[ara[i] - 1][ara[i + 1] - 1];
		}
		// cout << total << endl;
		if (total == k)++cnt;


	} while (next_permutation(ara.begin(), ara.end()));
	cout << cnt << endl;
	return 0;
}