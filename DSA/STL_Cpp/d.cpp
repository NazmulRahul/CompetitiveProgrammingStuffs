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
int main() {
#ifndef ONLINE_JUDGE1
	fin;
	fout;
#endif
	int t, x;
	cin >> t;
	x = 1;
	while (x <= t) {
		cout << "Case " << x << ":" << endl;
		string curr = "http://www.lightoj.com/";
		vector<string>vec;
		// vec.push_back(curr);
		for (int i = 0;; i++) {
			string str;
			getline(cin, str);

			vec.push_back(str);
			if (str == "QUIT")break;
		}
		// for (auto a : vec)
		// 	cout << a << endl;

		map<string, int>page;
		vector<string>count;
		count.push_back("http://www.lightoj.com/");
		int cnt = 0;
		if (x == 1) {
			for (int i = 1; vec[i] != "QUIT"; i++) {
				// cout << cnt << " " << count.size() << endl;
				if (vec[i] != "BACK" && vec[i] != "FORWARD") {
					count.insert(count.begin() + (cnt + 1), vec[i]);
					cnt++;
					count.erase(count.begin() + (cnt + 1), count.end());
					page["forward"] = 0;
					curr = vec[i];
					page["back"]++;
				}
				// cout << "<-------------------->" << endl;
				// cout << cnt << " " << count.size() << endl;
				// for (auto b : count)
				// 	cout << b << endl;
				// cout << "<-------------------->" << endl;
				// int cnt = count.size() - 1;
				if (vec[i] == "BACK") {
					if (page["back"] == 0) {
						cout << "Ignored" << endl;
						continue;
					}
					else {
						page["back"]--;
						page["forward"]++;
						// --cnt;
						curr = count[--cnt];
					}

				}
				if (vec[i] == "FORWARD") {
					if (page["forward"] == 0) {
						cout << "Ignored" << endl;
						continue;
					}
					else {
						page["back"]++;
						page["forward"]--;

						curr = count[++cnt];
					}
				}


				for (int i = 0; i < curr.size(); i++) {
					if (curr[i] == 'V' || curr[i] == 'I' || curr[i] == 'S' || curr[i] == 'I' || curr[i] == 'T' || curr[i] == ' ')continue;
					cout << curr[i];
				}
				cout << endl;
			}
		}
		else {
			for (int i = 0; vec[i] != "QUIT"; i++) {
				// cout << cnt << " " << count.size() << endl;
				if (vec[i] != "BACK" && vec[i] != "FORWARD") {
					count.insert(count.begin() + (cnt + 1), vec[i]);
					cnt++;
					count.erase(count.begin() + (cnt + 1), count.end());
					page["forward"] = 0;
					curr = vec[i];
					page["back"]++;
				}
				// cout << "<-------------------->" << endl;
				// cout << cnt << " " << count.size() << endl;
				// for (auto b : count)
				// 	cout << b << endl;
				// cout << "<-------------------->" << endl;
				// int cnt = count.size() - 1;
				if (vec[i] == "BACK") {
					if (page["back"] == 0) {
						cout << "Ignored" << endl;
						continue;
					}
					else {
						page["back"]--;
						page["forward"]++;
						// --cnt;
						curr = count[--cnt];
					}

				}
				if (vec[i] == "FORWARD") {
					if (page["forward"] == 0) {
						cout << "Ignored" << endl;
						continue;
					}
					else {
						page["back"]++;
						page["forward"]--;

						curr = count[++cnt];
					}
				}


				for (int i = 0; i < curr.size(); i++) {
					if (curr[i] == 'V' || curr[i] == 'I' || curr[i] == 'S' || curr[i] == 'I' || curr[i] == 'T' || curr[i] == ' ')continue;
					cout << curr[i];
				}
				cout << endl;
			}
		}





		x++;
	}

	return 0;
}