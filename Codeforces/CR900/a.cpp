/*
  Saikat Singha 
  28.06.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int  n , k ; 
    cin >> n >> k ; 
    vector<int>a(n);
    for(int i = 0 ;i < n ; i++) cin >> a[i];
    bool ok = false;
    for(auto u:a){
        if(u == k){
            ok = true;
            break;
        }
    }


    if(ok) cout <<"yes" << '\n';
    else cout << "no" << '\n';
    return ;
    


}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}