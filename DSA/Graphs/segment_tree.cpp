#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int>arr(N), tree(3 * N);
void construct(int b, int e, int node) {
    if (b == e) {
        tree[node] = arr[b];
        return;
    }

    int l = 2 * node;
    int r = 2 * node + 1;
    int mid = (b + e) / 2;
    construct(b, mid, l);
    construct(mid + 1, e, r);
    tree[node] = tree[l] + tree[r];
}
int query(int b, int e, int node, int i, int j) {
    if (i > e or j < b)
        return 0;
    if (b >= i and e <= j) {
        return tree[node];
    }
    int l = 2 * node;
    int r = 2 * node + 1;
    int mid = (b + e) / 2;
    return query(b, mid, l, i, j) + query(mid + 1, e, r, i, j);
}
void update(int b, int e, int node, int i, int val) {
    if (i > e or i < b)
        return;
    if (i == e and i == b) {
        tree[node] = val;
        return;
    }
    int l = node * 2;
    int r = node * 2 + 1;
    int mid = (b + e) / 2;
    update(b, mid, l, i, val);
    update(mid + 1, e, r, i, val);
    tree[node] = tree[l] + tree[r];
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    construct(1, n, 1);
    cout << query(1, n, 1, 1, 3) << ' ' << query(1, n, 1, 2, 3) << '\n';
    update(1, n, 1, 2, 10);
    cout << query(1, n, 1, 1, 3) << ' ' << query(1, n, 1, 2, 3) << '\n';

}