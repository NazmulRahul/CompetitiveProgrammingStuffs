#include <iostream>
#include <vector>
#include <iterator>
#include <set>
#include <functional>
#define endl '\n'
using namespace std;
int main() {
	set<int>sa = {3, 564, 1, 652, 4345, 5, 36};
	//remove all the elements up to remove n;
	// set.find()=>
	sa.insert(0);
	sa.erase(sa.begin(), sa.find(5));
	//set.erase(n) erase n from set// set.erase(iterator)=> remove from specific position
	sa.erase(652);
	cout << sa.insert(133).second << endl;
	cout << sa.insert(4345).second << endl;
	int x;
	cin >> x;
	if (sa.count(x) == 0)sa.insert(x);
	else
		cout << x << " " << "already exists" << endl;
	set<int, greater<int>>sr(sa.begin(), sa.end()); //greater<int> is used to reverse sort
	for (auto a : sa)
		cout << a << " ";
	cout << endl;
	for (auto a : sr)
		cout << a << " ";
	cout << endl;

	return 0;
}
/*
basic function associated with set =>>

1.begin() – Returns an iterator to the first element in the set.
2.end() – Returns an iterator to the theoretical element that follows last element in the set.
3.size() – Returns the number of elements in the set.
4.max_size() – Returns the maximum number of elements that the set can hold.
5.empty() – Returns whether the set is empty.
*/