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
	string s;
	cin >> s;
	string str = "hello";
	vector<char>ans;
	int n = str.size();
	int cnt = 0, temp = 0;
	while (cnt < n) {
		for (int i = temp; i < s.size(); i++) {
			if (s[i] == str[cnt]) {
				ans.push_back(s[i]);// = s[i];
				temp = i + 1;
				break;
			}
		}
		cnt++;
	}
	if (ans.size() == 5)cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}