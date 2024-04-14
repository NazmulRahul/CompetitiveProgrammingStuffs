#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;
typedef long double         ld;

#define int                 long long
#define double              long double
#define endl                '\n'
#define gap                 ' '
#define dbg(x)              cout<<#x<<" = "<<x<<'\n'
#define print(b)            for(auto &a:b) cout<<a<<' ';
#define ALL(r)              (r).begin(),(r).end()
#define FASTIO              ios::sync_with_stdio(false);cin.tie(NULL);
int mod = 1e9 + 7;
const int N = 1000;
int ci[] = {0, 0, -1, 1}, cj[] = {1, -1, 0, 0};
int level[N][N], vis[N][N];
char path[N][N];
void solve() {
	int n, m; cin >> n >> m;
	vector<string>arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int ax, ay, bx, by;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 'A')
				ax = i, ay = j;
			if (arr[i][j] == 'B')
				bx = i, by = j;
		}
	}
	queue<pair<int, int>>q;
	q.push({ax, ay});
	vis[ax][ay] = 1;
	while (q.empty() == 0 ) {
		int x = q.front().first, y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int X = x + ci[i], Y = y + cj[i];
			if (X<0 or X >= n or Y<0 or Y >= m or arr[X][Y] == '#' or vis[X][Y])
				continue;
			if (i == 0)path[X][Y] = 'R';
			if (i == 1)path[X][Y] = 'L';
			if (i == 2)path[X][Y] = 'U';
			if (i == 3)path[X][Y] = 'D';
			vis[X][Y] = 1;
			level[X][Y] = level[x][y] + 1;
			q.push({X, Y});
		}
	}
	if (vis[bx][by] == 0) {
		cout << "NO\n"; return;
	}
	cout << "YES\n";
	cout << level[bx][by] << endl;;
	string ans;
	int l = level[bx][by];
	-p	for (int i = 0; i < l; i++) {
		ans.push_back(path[bx][by]);
		if (path[bx][by] == 'R') {
			by--;
		}
		else if (path[bx][by] == 'L') {
			by++;
		}
		else if (path[bx][by] == 'U') {
			bx++;
		}
		else if (path[bx][by] == 'D') {
			bx--;
		}
	}
	reverse(ALL(ans));
	cout << ans << endl;
	// cout << arr[1];

}

signed main() {
	FASTIO
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}