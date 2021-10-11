#include <bits/stdc++.h>

using namespace std;

long long t[51][251];

long long dp(vector<long> v,long k,long n){ 
    if(n==0)
    return 1;
    if(n<0)
    return 0;
    if(n>=1 && k<1)
    return 0;
    if(t[k][n]!=-1)
    return t[k][n];
    t[k][n]=dp(v,k-1,n)+dp(v,k,n-v[k-1]);
    return t[k][n];   
}

void solve(){
    long n,k;
    cin>>n>>k;
    vector<long> v(k);
    for(int i=0;i<k;i++)
    cin>>v[i];
    cout<<dp(v,k,n);
}

int main(){
    memset(t,-1,sizeof t);
    solve();
    return 0;
}
