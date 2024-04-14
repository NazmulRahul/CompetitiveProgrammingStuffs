#include <iostream>
using namespace std;
int bigmod(int a, int b, int m) {
	if (b == 0)return a % m;
	int x = bigmod(a, b / 2, m);
	// cout << x << '\n';
	if (b % 2 == 1)x = (x * a) % m;
	// cout << x << '\n';
	return x;
}
int main() {
	int a, b, m;
	std::cin >> a >> b >> m;
	std::cout << bigmod(a, b, m) << '\n';
	return 0;
}