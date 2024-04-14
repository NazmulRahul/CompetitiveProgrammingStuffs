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
using namespace std;
bool SortByval(const pair<int, int>&a, const pair<int, int>&b) {
	return (a.second < b.second);
}
int cnt;
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int n;
	cin >> n;
	int cnt = 0, total = 0;
	vector<int>vec(n);
	for (auto &a : vec) {
		cin >> a;
		total += a;
	}
	sort(vec.rbegin(), vec.rend());
	for (int i = 0; i < n; i++) {
		cnt += vec[i];
		if (cnt > (total / 2)) {
			cout << i + 1 << endl;
			return 0;
		}
	}


	return 0;

}