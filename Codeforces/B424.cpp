#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
const int N = 1e6;
bool comp(pair<double, int>& a, pair<double, int>& b) {
	if (a.first == b.first)
		return a.second > b.second;
	else
		return a.first < b.first;
}
int main() {
	int n, s;
	cin >> n >> s;
	vector<pair<double, int>>vec(n);
	for (int i = 0; i < n; i++) {
		double x, y;
		int z;
		cin >> x >> y >> z;
		double r = sqrt((x * x) + (y * y));
		vec[i].first = r; vec[i].second = z;
	}
	sort(vec.begin(), vec.end(), comp);
	cout << std::setprecision(7) << fixed;
	for (int i = 0; i < n; i++) {
		s += vec[i].second;
		if (s >= N) {
			// printf("%lf.6\n",vec[i].first );
			cout << vec[i].first << endl; return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}