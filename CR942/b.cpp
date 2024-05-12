/*
  Saikat Singha 
  12.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int n ;
    cin >> n;
    int cnt = 0;
    for(int i = 0;i<n;i++) {
        char c;
        cin >> c;
        if(c == 'U') cnt+=1;
    }

    cout << ((cnt & 1) ? "Yes":"No") << '\n';
    return ;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

    return 0 ;
}