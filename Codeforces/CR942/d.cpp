/*
  Saikat Singha 
  11.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;
i64 gcd ( i64 a , i64 b){
    if( b == 0 ) return a ;
    else return gcd(b , a%b);
}
void solve(){

    int n , m;
    cin >> n >> m;
    i64 ans = 0;
    for (i64 b = 1; b<=m ;b++){
        for(i64 a =b ;  a<=n ; a+=b){
            if((i64)(a+b) % (i64)(b*gcd(a,b))==0) ans+=1;
        }
    }
    cout << ans << '\n';
    return  ;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}