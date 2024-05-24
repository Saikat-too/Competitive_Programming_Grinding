/*
  Saikat Singha 
  17.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int n , k; 
    cin >> n >> k ;
    vector<int>a(n);
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a.begin() , a.end());
    map<int,int>cnt;
    bool ok = false;
    for(int i = 0;i<n;i++){
        cnt[a[i]]+=1;
        if(cnt[a[i]]==k) {
            ok = true;
            break;
        }
    }       
    if(ok) cout << k-1 << '\n';
    else cout << n << '\n';

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