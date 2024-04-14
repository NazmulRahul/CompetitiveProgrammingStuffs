#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
#define endl '\n'
#define print(b)    for(auto a:b) cout<<a<<' ';
#define printN(b)   for(auto a:b) cout<<a<<endl;
#define fastio      ios::sync_with_stdio(false);cin.tie(0);
#define pp  pair<int,int>
#define pb push_back
#define popb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
long double pi = 3.14159265358979323846264338327950;
long double eps = 1e-6;
int n, f;
int ara[10000];
vector<long double>vec;
bool comp(long double x) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += floor(vec[i] / x);
    }
    return cnt >= (f + 1);

}
void solve() {
    cin >> n >> f;
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    vec.clear();
    for (int i = 0; i < n; i++) {
        vec.push_back(ara[i]*ara[i]*pi);
    }
    sort(vec.begin(), vec.end());
    long double hi = vec[n - 1], lo = 0;
    long double mid;
    while (hi - lo >= eps) {
        mid = lo + (hi - lo) / 2;
        if (comp(mid))
            lo = mid;
        else
            hi = mid;

    }
    // cout << setprecision(4);
    if (comp(hi))
        printf("%.4Lf\n", hi);
    else
        printf("%.4Lf\n", lo);
}

int main() {
    fastio

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}