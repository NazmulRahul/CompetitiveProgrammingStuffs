#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define print(b)  for(auto &a:b) cout<<a<<' ';
#define printN(b) for(auto &a:b) cout<<a<<endl;
#define ALL(r) (r).begin(),(r).end()
#define fastio ios::sync_with_stdio(false);cin.tie(0);
int cnt = 0;
int power(int a, int n) {
    if (n ==0) {
        return 1;
    }
    ll tem = power(a, n / 2);
    if (n & 1)
        return tem * tem * a;
    else
        return tem * tem;
}
int main() {
    fastio
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}
//logN complexity