#include<bits/stdc++.h>
#include <cstddef>
using namespace std ;
using ll = long long  ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n  , m ;
    cin >> n >> m  ;
    vector<ll>a(n);
    vector<ll>ind;
    map<ll , ll > numpairs;
    ind.assign(n+1 , 0);
    for(ll i = 0 ; i < n ; i++) cin >> a[i];
    ll res = 1LL  ;
    for(ll i = 0  ; i < n ; i++) ind[a[i]] = i ;
    for(ll i = 1 ;  i < n  ; i++){
       // cout <<"ELements in loop : " <<  ind[n+1] << ' ' << ind[n] << '\n';
        if(ind[i+1] < ind[i]) res+=1;
    }

    for(int i = 0 ; i <  m ; i++){
        int x , y ;
        cin >> x >> y ;
        --x , --y  ;
        if(a[x] > 1) numpairs.insert({a[x]-1 , a[x]});
        if(a[x] < n) numpairs.insert({a[x] , a[x]+1});
        if(a[y] > 1 ) numpairs.insert({a[y]-1 , a[y]});
        if(a[y] < n ) numpairs.insert({a[y] , a[y]+1});

       for(auto it =numpairs.begin() ; it!=numpairs.end() ; it++) {
           if(ind[it->first] > ind[it->second])res--;
       }


       swap(a[x] , a[y]);
       ind[a[x]] = x ;
       ind[a[y]] = y ;

       for(auto it = numpairs.begin() ; it  != numpairs.end() ; it++){
          if(ind[it->first] > ind[it->second]) res++;
       }
       cout  <<  res << '\n';
       numpairs.clear();
    }

    return 0 ;
}
