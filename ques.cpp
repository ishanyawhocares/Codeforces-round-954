#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll x, int n, int m){
    ll res = 0;
    --x;
    for(int i=1;i<=n;++i) res+=min((ll)m, x/i);
    return res;
}

void solve() {
    int n, m;
    cin>>n>>m;
    ll k;
    cin>>k;
    
    ll l = 1, r = 1LL*n*m+1;
    
    while(l<r){
        ll x = (l+r)>>1;
        
        if(f(x,n,m)<k) l = x+1; else r = x;
    }
    
    cout<<l-1<<endl;
    
}   

int main () {
    ll t;
    cin >> t;
    
    while(t--) {
    solve();
    } 

    return 0;
}