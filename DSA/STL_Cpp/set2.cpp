#include <bits/stdc++.h>
#define rep(i,n)    for(int i=0;i<(n);++i)
#define repA(i,k,n) for(int i=k;i<=(n);++i)
#define repD(i,k,n)	for(int i=k;i>=(n);--i)
#define endl '\n'
#define print(b)	for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fin    		freopen("C:\\Users\\Nazmul Rahul\\Desktop\\in.txt", "r", stdin)
#define fout   		freopen("C:\\Users\\Nazmul Rahul\\Desktop\\out.txt", "w", stdout)
#define fastio    	ios::sync_with_stdio(false)
#define max(a,b)	((a)>(b)?(a):(b))
#define min(a,b)	((a)<(b)?(a):(b))
#define pb    		push_back
#define pob   		pop_back
#define ll 			long long int
using namespace std;
int main() {
	fin;
	fout;
	int n = 5;
	set<string>s;
	while (n--)
	{	string x;
		cin >> x;
		cout << x << " " << s.insert(x).second << endl;
		// if (s.count(x) == 0)s.insert(x);
		// else
		// 	cout << "already exists !!" << endl;

	}
	for (auto x : s)
		cout << x << " ";
	cout << endl;
	s.erase("ab");
	for (auto x : s)
		cout << x << " ";
	cout << endl;


	// while (n--) {
	// 	string x;
	// 	cin >> x;
	// 	s.insert(x);
	// }
	// set<string>::iterator it=s.begin();
	// auto it = s.begin();
	// for (int i = 0; i < 2; i++)
	// 	it++;
	// cout << *it << endl;

	// for (auto i : s)
	// 	cout << i << ' ';
	// cout << endl;
	// cout << s.size() << endl;
	//****




	return 0;
}
/**
binary search(log n);
set.insert()
set.size()
set.count(x)
set.insert(x).second::shows if inserted or not, return 0/1
set.erase(iterator or value)


**/
