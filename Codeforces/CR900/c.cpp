/*
  Saikat Singha 
  4.7.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){
    
    i64 n , k , x ;
    cin >> n >> k >> x ; 
    if(x >= 1LL * k *(k+1)/2 && x <= 1LL * k * (n+n-k+1) /2   ) cout << "Yes" << '\n';
    else cout << "No" << '\n';

    return ; 

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}