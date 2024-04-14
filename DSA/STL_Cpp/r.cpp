#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	set<ll>input;
	ll n;
	cin >> n;
	vector<ll>vec;
	int x = 1;
	while (x <= n) {
		ll num;
		cin >> num;
		auto it = input.begin();
		if (x == 1) {
			input.insert(num);
			vec.push_back(x);
			x++;

			continue;
		}
		if (num <= *it) {
			if (num != *it) {
				vec.clear();
				input.insert(num);
				vec.push_back(x);
			}
			else {
				vec.push_back(x);
			}

		}
		x++;
	}
	// cout << vec[0] << " " << vec[1] << endl;
	int dis;
	for (int i = 0; i < vec.size() - 1; i++) {
		if (i == 0) {
			dis = vec[1] - vec[0];
			continue;
		}
		int temp = vec[i + 1] - vec[i ];
		if (temp < dis) {
			dis = temp;
		}
	}
	cout << dis << endl;


	return 0;
}