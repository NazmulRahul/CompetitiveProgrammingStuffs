#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int kthGrammar(int n, int k) {
        if (n == 1)
            return 0;
        if (k > (1 << (n - 2))) {
            k -= (1 << (n - 2));
            return ((kthGrammar(n - 1, k)) ^ 1);
        }
        else
            return kthGrammar(n - 1, k);
    }
};
int main() {
    int n, k;
    cin >> n >> k;
    Solution x;
    cout << x.kthGrammar(n, k);
}