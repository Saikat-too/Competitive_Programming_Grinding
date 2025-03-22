
#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

void solve(){
    int n , m , q  ;
    cin >> n >> m >> q ;
    vector<int>a(m);
    for(int i = 0 ; i < m ; i++) cin >> a[i];
    sort(a.begin() , a.end());
    for(int i = 1 ; i<=q ; i++){
        int x ; cin >> x ;
        auto it = upper_bound(a.begin() , a.end() , x)-a.begin();
        if(it == 0 ) cout << a[0] -1 << '\n';
        else if(it == m) cout << n-a[m-1] << '\n';
        else cout << (a[it] - a[it-1])/2 << '\n';
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
