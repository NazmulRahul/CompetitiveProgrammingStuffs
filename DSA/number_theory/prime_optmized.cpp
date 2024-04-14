#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n == 3 or n == 2)
		cout << "prime";
	else if (n <= 1 or n % 2 == 0 or n % 3 == 0) {
		cout << "Not prime" << endl;
		return 0;
	}
	else {
		int j = floor(sqrt(n)) + 1;
		for (int i = 5; i < j; i += 6) {
			if (n % i == 0 or n % (i + 2) == 0) {
				cout << "Not prime" << endl;
				return 0;
			}
		}
	}
	cout << "Prime" << endl;
	return 0;
}