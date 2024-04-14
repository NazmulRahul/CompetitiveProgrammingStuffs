#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int ara[N];
int cnt;
void merge(int l,int r,int mid){
    int l_size=(mid-l+1);
    int r_size=(r-mid);
    int L[l_size+1];
    int R[r_size+1];
    for(int i=0;i<l_size;i++){
        L[i]=ara[i+l];
    }
    for(int i=0;i<r_size;i++){
        R[i]=ara[i+mid+1];
    }
    L[l_size]=R[r_size]=INT_MAX;
    int li=0,ri=0;
    for(int i=l;i<=r;i++){
        if(L[li]<R[ri]){
            ara[i]=L[li++];
        }
        else{
            cnt++;
            ara[i]=R[ri++];
        }    
    }
}
void mergesort(int l,int r){
    if(l==r)
        return;   
    int mid=l+(r-l)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);

    merge(l,r,mid);
}

int main(){
    int n;
    // cin>>n;
    n=7;
    ara[0]=4;
    ara[1]=1;
    ara[2]=4;
    ara[3]=6;
    ara[4]=7;
    ara[5]=7;
    ara[6]=5;
    int c=0;
    // for(int i=n;i>0;i--){
    //     ara[c++]=i;
    // }
    mergesort(0,n-1);
    for(int i=0;i<n;i++){
        cout<<ara[i]<<" ";
    }
    cout<<'\n'<<cnt<<'\n';
}
