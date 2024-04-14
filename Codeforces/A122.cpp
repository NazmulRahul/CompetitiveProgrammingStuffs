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
	int n;
	cin >> n;
	vector<int>vec;
	int t = sqrt(n);
	for (int i = 1; i <= t; i++) {
		if (n % i == 0) {
			if (i == n / i) {
				vec.push_back(i);
			}
			else {
				vec.push_back(i);
				vec.push_back(n / i);
			}
		}
	}

	for (int i = 0; i < vec.size(); ++i) {
		int c = 1;
		while (vec[i] != 0) {
			int n = vec[i] % 10;
			if (n == 7 || n == 4) {
				vec[i] = vec[i] / 10;
				continue;
			}
			c = 0;
			break;
		}
		if (c != 0) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	return 0;
}

