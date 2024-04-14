// #include <bits/stdc++.h>
// using namespace std;
// int dp[1000];
// int fibonacci(int n){
//     if(n<=1){
//         return dp[n]=n;
//     }
//     if(dp[n]!=-1)
//         return dp[n];
//     else
//         return dp[n]=fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//     int n;
//     memset(dp,-1,sizeof(dp));
//     cin>>n;
//     cout<<fibonacci(n)<<endl;
// }
#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int ara[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        printf("%d", ara[i]);
    }
    int rot = 0;
    char c; int d;
    while (m) {
        scanf("%c %d", &c, &d);
        printf("%c %d\n", c, d );
        m--;
    }
    return 0;
}