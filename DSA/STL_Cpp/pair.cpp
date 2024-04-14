#include <bits/stdc++.h>
#include <cmath>
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
int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	pair<int, string>P;
	P = {1, "rahul"};
	cout << P.first << " " << P.second << endl;
	pair<pair<int, string>, int>q;
	int i = 8;
	q = {{i, "rahul"} , i};
	cout << q.first.first << endl << q.first.second << endl << q.second << endl;
	vector<pair<int, string>>p;
	p.push_back({3, "r"});
	p.push_back({4, "a"});
	for (int i = 0; i < p.size(); i++)
		cout << p[i].first << endl << p[i].second << endl;
	for (auto a : p)
		cout << a.first << endl << a.second << endl;





	return 0;
}