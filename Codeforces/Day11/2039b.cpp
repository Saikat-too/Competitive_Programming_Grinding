
#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

void solve(){
    string s , ans = "-1" ;
    cin >> s ;
    int n = (int)s.length();
    for(int i = 0 ; i < n-1 ; i++){
        if(s[i] == s[i+1]){
            cout << s.substr(i , 2) << '\n';
            return ;
        }
    }
    for(int i = 0 ; i < n-2 ; i++){
        if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i] !=s[i+2]){
            cout << s.substr(i , 3) << '\n';
            return ;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;
    while(t--) solve();
    return 0 ;
}
