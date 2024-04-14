#include <iostream>
#include<cmath>
using namespace std;
/* 
const int N = 1e6 + 5;
bool mark[N], prime[N];
void sieve(int n) {
    int l = sqrt(n) + 1;
    for (int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[2] = 1;
    for (int i = 3; i <= n; i += 2) {
        if (mark[i] != 1) {
            prime[i] = 1;
            mark[i] = 1;
            if (i <= l)
                for (int j = i * i; j <= n; j += (2 * i))
                    mark[j] = 1;
        }
    }
}

*/
const int N=3e5+5;
int nprime, prime[N];
bool mark[N];
int tprime[N];
int cnt;
void sieve(int n) {
    int i, j, limit;
    limit = sqrt(n * 1.) + 1;
    for (int i = 4; i <= n; i += 2) {
        mark[i] = true;
    }
    prime[nprime++] = 2;
    for (i = 3; i <= n; i += 2) {
        if (!mark[i]) {
            prime[nprime++] = i;
            if (i <= limit) {
                for (j = i * i; j <= n; j += (i * 2))
                    mark[j] = true;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (mark[i] == 0)
            cnt++;
        tprime[i] = cnt;
    }
}
int main() {
    sieve(N-1);
    cout<<cnt<<'\n';
    // cout << tprime[5];
    cout << endl;
}
