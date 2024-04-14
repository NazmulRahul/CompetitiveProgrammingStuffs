#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;
int main() {
	pair<int, char>p; //pair can be ->> copied,compared and assigned
	p.first = 3;
	p.second = 'r';
	cout << p.first << " " << p.second << endl;
	pair<int, char> g(p);
	pair<int, string>q(4, "rahul");
	//member function => make_pair(value 1, value 2)
	pair<string, double>f;
	f = make_pair("Pi is equal = ", 3.14);
	cout << f.first << " " << f.second << endl;
	//swap => p1.swap(p2);
	pair<string, double>f1;
	f1 = make_pair("Rahul", 1.3);
	f1.swap(f);
	//vector of pair
	vector<pair<string, int>>vec(2);
	for (auto& a : vec)
		cin >> a.first >> a.second;
	for (auto a : vec)
		cout << a.first << " " << a.second << endl;




	return 0;
}