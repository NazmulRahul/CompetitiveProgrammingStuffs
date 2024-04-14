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
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		vector<ll>arr(n);
		for (auto &a : arr)
			cin >> a;
		ll ans = 0;
		for (ll i = n - 1; i > 0; --i ) {
			ans += abs(arr[i] - arr[i - 1]);
		}
		set<ll>min;
		for (int i = n - 1; i >= 0; i--) {
			if (i == (n - 1)) {
				min.insert(ans - (abs(arr[i] - arr[i - 1])));
			}
			else if (i == 0) {
				min.insert(ans - (abs(arr[i] - arr[i + 1])));
			}
			else {
				min.insert(ans - abs(arr[i] - arr[i + 1]) - abs(arr[i] - arr[i - 1]) + abs(arr[i - 1] - arr[i + 1]));
				min.insert(ans - abs(arr[i] - arr[i - 1]) - abs(arr[i] - arr[i + 1]) + abs(arr[i - 1] - arr[i + 1]));
			}
		}
		for (auto a : min) {
			cout << a << endl;
			break;
		}
	}


	return 0;
}