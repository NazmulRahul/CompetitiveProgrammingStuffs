#include <bits/stdc++.h>
#define rep(n)    for(int i=0;i<(n);++i)
#define repA(k,n) for(int i=k;i<=(n);++i)
#define repD(k,n)	for(int i=k;i>=(n);--i)
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
// bool sortByVal(const pair<int, int> &a,
//                const pair<int, int> &b)
// {
// 	return (a.second < b.second);
// }
void solution() {
	int n;
	cin >> n;
	vector<int>vec(n);
	for (auto &a : vec)
		cin >> a;
	vec.erase(unique(vec.begin(), vec.end()), vec.end());
	map<int, int>pos;
	for (auto a : vec)
		pos[a]++;
	int ans = n;
	for (auto a : vec) {
		ans = min(ans, pos[a] + 1 - (vec[0] == a) - (vec[vec.size() - 1] == a));
	}
	cout << ans << endl;
	return;
}

int main() {
#ifndef ONLINE_JUDGE
	fin;
	fout;
#endif
	int t;
	cin >> t;
	while (t--) {
		solution();//opitmized

		/*
				//my solution:
				int cnt = 0;
				int f = 0;
				int n;
				cin >> n;
				vector<int>vec;
				map<int, int>m;
				map<int, int>num;
				set<int>s;
				for (int i = 0; i < n; i++) {
					int x;
					cin >> x;
					vec.push_back(x);
					if (num[x] != i - 1 || m[x] == 0)m[x]++;
					num[x] = i;
					s.insert(x);
				}
				if (s.size() == 1) {
					cout << 0 << endl;
					f = 1;
				}
				if (f == 1)continue;
				int l = vec.size();


				vector<pair<int, int>>v;
				for (auto it = m.begin(); it != m.end(); it++) {
					v.push_back(make_pair(it->first, it->second));
				}

				sort(v.begin(), v.end(), sortByVal);
				vector<int>pos;
				int x = v[0].first;
				if (vec[0] == vec[l - 1]) {
					if (m[vec[0]] == m[x] || m[vec[0]] == m[x] + 1) {
						cout << m[vec[0]] - 1 << endl;
						f = 1;
					}
				}
				if (m[vec[0]] == m[x]) {
					cout << m[vec[0]] << endl;
					f = 1;
				}

				if (f == 1)continue;
				if (m[vec[l - 1]] == m[x]) {
					cout << m[vec[l - 1]] << endl;
					f = 1;
				}
				if (f == 1)continue;
				cout << m[x] + 1 << endl;
		*/

	}



	return 0;
}