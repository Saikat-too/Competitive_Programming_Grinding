
#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

void solve(){
    int l , r , L , R ;
    cin >> l >> r >> L >> R ;
    if(l > L) {
        swap(l , L);
        swap(r , R);
    }
    if(l == L and R == r){
        cout << R-L << '\n';
        return ;
    }
    if(L <= r and R > r){
        cout << r-L + 2 << '\n';
        return ;
    }
    if(L < r and R <= r){
       if(r!=R)cout << R-L + 2 << '\n';
       if(r==R) cout << R-L + 1 << '\n';
      return ;
    }
    if( L > r){
        cout << 1 << '\n';
        return ;
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
