/*
  Saikat Singha 
  26.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int n ;
    cin >> n;
    vector<i64>a(n);
    for(int i = 0;i<n;i++)cin>>a[i];
    i64 ans = 0;
    sort(a.begin() , a.end());
    for(int i = 1 ;i<n;i++) ans+= a[i]-a[i-1];
    cout << ans << '\n';
    return ;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}