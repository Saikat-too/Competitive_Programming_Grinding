/*
  Saikat Singha 
  12.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int n;
    cin >> n;
    vector<int>a(n) , b(n);
    for(int i = 0;i<n;i++) cin >> a[i];
    for(int j = 0;j<n;j++) cin >> b[j];
    int ans = 0,k=0;
    for(int i = 0;i<n;i++){
        if(b[i]>=a[k]) {
            k+=1;
            continue;
        }
        ans+=1;
        
    }
    cout << ans << '\n';
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