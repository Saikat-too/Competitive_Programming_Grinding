/*
  Saikat Singha 
  24.05.2024

*/
  


#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){
    int n , k;
    cin >> n >> k ; 
    if(k==4*n-2){
        cout << 2*n << '\n';
    }
    else{
        cout << (k+1)/2 << '\n';
    }

    return ;

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}