#include<bits/stdc++.h>
using namespace std ;
using ll = long long  ;

int main(){
    int n ;
    cin >> n ;
    vector<ll>a(n);
    for(int i = 0 ; i < n  ; i++) cin >> a[i];
    ll  res = 0 ;
    map<ll ,ll>mp ;
    for(ll i = 0 ,  j = 0 ; i < n ; i++){
        while(j < n && mp[a[j]] < 1) mp[a[j]]++ ,  ++j;
        res = max(res , j-i);
        mp[a[i]]--;
    }
    cout << res << '\n';
    return 0 ;
}
