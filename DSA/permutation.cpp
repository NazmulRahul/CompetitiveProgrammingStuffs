#include <bits/stdc++.h>
using namespace std;
vector<int>permutation;
int n;
int check[100000];
void solve(){
    if(permutation.size()==n){
        for(auto &i:permutation)
            cout<<i<<" ";
        cout<<"\n";
    }
    else{
        for(int i=1;i<=n;i++){
            if(check[i])
                continue;
            check[i]=1;
            permutation.push_back(i);
            solve();
            check[i]=false;
            permutation.pop_back();

        }
    }
}
int main(){
    cin>>n;
    solve();
}