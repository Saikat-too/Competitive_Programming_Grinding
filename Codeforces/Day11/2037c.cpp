
#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

void solve(){
    int n ;
    cin >> n ;
    if(n < 5){
        cout << -1 << '\n';
        return ;
    }
    int last = 0 ;
    for(int i = 1 ; i <= n ; i+=2){
        cout << i << ' ';
        last = i ;
    }
    for(int i = 2 ; i <= n ; i+=2){
        if((last+i) % 3 == 0 || (last+i) % 5 ==0 || (last+i) % 7 == 0 ){
            if((last+i == 3) || (last+i == 5) || (last+i == 7)) continue ;
            cout << i << ' ';
            last = i ;
            break;
        }
    }
    for(int i = 2  ; i<=n ; i+=2 ){
        if(last == i ) continue;
        cout << i << ' ' ;
    }
    cout << '\n';


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;
    while(t--) solve();
    return 0 ;
}
