#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

signed main() {
    indexed_set s;
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(9);
    auto x = s.find_by_order(2);//element at index two
    cout << *x << "\n"; // 7
    cout<<s.order_of_key(2)<<"\n";//index of two

    return 0;
}