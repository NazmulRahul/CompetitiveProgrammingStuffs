#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int Max = 100001;

int main() {
	int n, ans = 0;
	cin >> n;
	vector<int>peak(n);
	for (auto &i : peak)
		cin >> i;
	for (int div = 1; div <= n; div++) {
		if (n % div == 0) {
			int day_count = 0;
			for (int per_day = 0; per_day <= n; per_day += div) {

				bool top_peak = false;
				for (int i = per_day; i <= per_day + div - 1; i++) {
					if (0 <= i and i < n - 1 and peak[i] > peak[i - 1] and peak[i] > peak[i + 1]) {
						top_peak = true;
					}
				}
				if (!top_peak)
					break;
				day_count++;
			}
			if (day_count == n / div)
				ans = max(ans, day_count);

		}
	}
	cout << ans << endl;

	return 0;
}