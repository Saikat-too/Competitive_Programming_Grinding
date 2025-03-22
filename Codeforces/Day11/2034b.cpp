
#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

void solve(){
    int n , m , k , cnt_m = 0  , res  = 0 ;
    cin >> n  >> m >> k;
    string a ;
    cin >> a ;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == '1') cnt_m = 0 ;
        else cnt_m++;
        if(cnt_m == m){
            cnt_m = 0 ;
            res++;
            i += k-1 ;
        }
    }
   cout << res << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;
    while(t--) solve();
    return 0 ;
}
