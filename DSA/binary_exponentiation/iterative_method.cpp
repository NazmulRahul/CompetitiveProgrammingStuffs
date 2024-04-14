#include<iostream>
using namespace std;
int power(int a,int n){
    int ans=1;
    while(n){
        if(n&1){
            ans*=a;
        }
        a*=a;
        n>>=1;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<'\n';
    return 0;
}
//changes