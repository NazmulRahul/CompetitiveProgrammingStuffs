#include <bits/stdc++.h>
#define rep(i,n)    for(int i=0;i<(n);++i)
#define repA(i,k,n) for(int i=k;i<=(n);++i)
#define repD(i,k,n)	for(int i=k;i>=(n);--i)
#define endl '\n'
#define print(b)	for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fin    		freopen("C:\\Users\\Nazmul Rahul\\Desktop\\in.txt", "r++", stdin)
#define fout   		freopen("C:\\Users\\Nazmul Rahul\\Desktop\\out.txt", "w++", stdout)
#define fastio    	ios::sync_with_stdio(false)
#define max(a,b)	((a)>(b)?(a):(b))
#define min(a,b)	((a)<(b)?(a):(b))
#define pb    		push_back
#define pob   		pop_back
#define ll 			long long int
#define MAX         2*100001
std::vector<ll> total(MAX);
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int n, w;
	cin >> n >> w;
	int s, t, p;
	vector<pair<int, int>>event;
	while (n--) {
		cin >> s >> t >> p;
		event.push_back(make_pair(s, p));
		event.push_back(make_pair(t, -p));
	}

	ll cur = 0;
	sort(event.begin(), event.end());
	for (auto [a, b] : event)
		cout << a << ' ' << b << endl;
	for (auto [time, value] : event) {
		cur += value;
		if (cur > w) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	return 0;
}