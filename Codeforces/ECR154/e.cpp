/*
  Saikat Singha 
  03.06.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int n ; 
    cin >> n ;
    vector<int>a(n);
    int res = 0 ; 
    for(int i = 0;i<n;i++) cin >> a[i];
    for(int i = 0;i<n-1;i++) res += (a[i]>=a[i+1]);
    int cur = res ; 
    for(int i = 0 ;i<n ; i++ ) {
        
        cur-=(a[i]>=a[i+1]);
        if(i > 0 ) cur += (a[i] >=  a[i-1]);

        res = min(res , cur + 1);
        
    }
    
    cout <<res << '\n';
    return ; 

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}