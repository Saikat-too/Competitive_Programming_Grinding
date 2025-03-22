
#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

void solve(){
    int n ;
    cin >> n ;
    for(int ans = 1 , curr = 1 ;  ; ans++ , curr = curr*2 + 2){
       if(curr >= n){
           cout << ans << '\n';
           break;
       }
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;
    while(t--) solve();
    return 0 ;
}
