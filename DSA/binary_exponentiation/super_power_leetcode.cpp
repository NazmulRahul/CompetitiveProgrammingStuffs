#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define print(b)  for(auto &a:b) cout<<a<<' ';
#define printN(b) for(auto &a:b) cout<<a<<endl;
#define ALL(r) (r).begin(),(r).end()
#define fastio ios::sync_with_stdio(false);cin.tie(0);
class Solution {
public:
    int power(int a, int b, int m) {
        long long ans = 1;
        a %= 1337;
        while (b) {
            if (b & 1)
                ans = (ans * a) % m;
            a = (a * a) % m;
            b >>= 1;
        }
        return (int)ans;
    }
    int superPow(int a, vector<int>& b) {
        int tem = 0;
        int cnt = 0;
        int n = (int)b.size();

        for (int i = n - 1; i >= 0; i--) {
            tem = (tem + b[i] * power(10, cnt++, 1140)) % 1140;
        }
        // cout << tem << endl;
        return power(a, tem, 1337);
    }
};

int main() {
    fastio
    vector<int>vec = {1, 2, 0, 0};
    Solution x;
    int y = x.superPow(2147483647, vec);
    cout << 1200 % 1140 << endl;
    return 0;
}