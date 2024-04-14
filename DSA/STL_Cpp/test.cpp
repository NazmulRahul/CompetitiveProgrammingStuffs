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
bool rsort(const int &a, const int &b) {
	return (a > b);
}
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	vector<int>vec;
	for (int i = 0; i < 9; i++) {
		int x;
		cin >> x;
		vec.push_back(x);
	}
	for (auto a : vec) {
		cout << a << endl;
	}
	sort(vec.begin(), vec.end(), rsort);
	cout << "===================" << endl;
	for (auto a : vec)
		cout << a << endl;

	return 0;
}