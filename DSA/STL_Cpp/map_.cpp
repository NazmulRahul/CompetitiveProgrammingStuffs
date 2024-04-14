#include <bits/stdc++.h>
//#include <map>
//#include <iterator>
#define endl '\n'
using namespace std;
int main() {
	map<int, int>m;
	int n = 4;
	while (n--) {
		int x; cin >> x;
		m[n] = x;
	}
	map<int, int>mm(m.begin(), m.end());
	mm.erase(mm.begin(), mm.find(2));
	map<int, int>::iterator it;
	for (it = mm.begin(); it != mm.end(); it++)
		cout << it->first << '\t' << it->second << endl;
	cout << "My\tis\tRahul" << endl;

	return 0;
}