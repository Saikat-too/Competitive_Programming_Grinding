/*
  Saikat Singha 
  24.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    string a , b ; 
    cin >> a >> b ;
    int n = (int)a.length();
    bool ok = false;
    for(int i = 0;i<n-1;i++){
        if(a[i]==b[i] && a[i]=='0' && a[i+1]==b[i+1] && b[i+1]== '1') ok = true;
    }
    if(ok) cout << "YES" << '\n';
    else cout << "NO" << "\n";

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}