/*
  Saikat Singha 
  28.06.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;-
i64 MOD = 1e9+7;

void solve(){

    int n ;
    cin >> n ;
    vector<i64>a(n);
    a[0] = 11;
    a[1] = 12 ; 
    for(int i = 2 ; i < n ;i++){
        a[i] = a[i-1]+1;
    }

    for(auto u : a) cout << u << ' ';

    cout << '\n';


}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}