#include <iostream>
using namespace std;
const long long int inf=1e18;

long long binMultiply(long long a,long long b){
    long long ans=0;
    while(b>0){
        if(b&1){
            ans=(ans+a)%inf;
        }
        a=(a+a)%inf;
        b>>=1;
    }
    return ans;
}
long long binExp(long long a,long long b){
    long long ans=1;
    while(b>0){
        if(b&1)
            ans=binMultiply(ans,a);
        a=binMultiply(a,a);
        b>>=1;
    }
    return ans;
}
int main(){
    
    int a,b;
    cin>>a>>b;
    cout<<binExp(a,b)<<'\n';
    return 0;
}