#include<bits/stdc++.h>
using namespace std ;
using ll = long long  ;

int main(){
    ll n ;
    cin >> n ;
    vector<ll>a(n);
    vector<ll>ind;
    ind.assign(n+1 , 0);
    for(ll i = 0 ; i < n ; i++) cin >> a[i];
    ll res = 1LL  ;
    for(ll i = 0  ; i < n ; i++) ind[a[i]] = i ;
    for(ll i = 1 ;  i < n  ; i++){
       // cout <<"ELements in loop : " <<  ind[n+1] << ' ' << ind[n] << '\n';
        if(ind[i+1] < ind[i]) res+=1;
    }
    cout << res << '\n';
    return 0 ;
}
