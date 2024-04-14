#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios::sync_with_stdio(false)
#define endl '\n'
double eps=1e-6;
int bsqrt(int n) {
    int lo = 1, hi = 1000000000;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (mid * mid >= n)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return lo;
}
int main()
{
    double x;
    while(scanf("%lf",&x)!=EOF){ 
    double hi=x,lo=1,mid;
    while(hi-lo>eps){
        mid=lo+(hi-lo)/2;
        if(mid*mid<x)//for nth root, multiply mid n times;
            lo=mid;
        else
            hi=mid;
    }// complexity nlog(x*(10^eps));
    cout<<hi<<endl;
    }
    
    return 0;
}