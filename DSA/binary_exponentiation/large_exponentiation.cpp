#include<iostream>
using namespace std;
int M=1e9+7;
int power(int a,int n,int m){
    int ans=1;
    while(n){
        if(n&1){
            ans=(ans*1LL*a)%m;
        }
        a=(a*a)%m;
        n>>=1;
    }
    return ans;
}
int main(){
    int a,b;
    // cin>>a>>b;
    //a=50,b=64^32;
    cout<<power(50,power(64,32,M-1),M))<<'\n';//(x^y)%m=(x^(b%m-1))%m->when m is prime;
    //50^(62^32)%m=50^((62^32)%(m-1))%m
    return 0;
}