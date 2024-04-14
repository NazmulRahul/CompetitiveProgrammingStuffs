#include <iostream>
using namespace std;
const long long int inf = 1e18;
long long binMultiply(long long a, long long b) {
    long long ans = 0;
    while (b > 0) {
        if (b & 1) {
            ans = (ans + a) % inf;
        }
        a = (a + a) % inf;
        b >>= 1;
    }
    return ans;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << binMultiply(a, b) << '\n';
}