#include<bits/stdc++.h>
using namespace std ;
using i64 = long long ;

void solve(){
   int n ;
   cin >> n ;
   vector<i64>a(n)  ;
   for(int i = 0 ; i < n ; i++) cin >> a[i];
   i64 ans = -1e18 ;
   int curr = n ;
   for(int i  = 0 ; i<n ; i++  ){
      i64 sum = 0 ;
      for(int i = 0 ; i < curr ; i++) sum+=a[i];
      if(i == 0) ans = max(ans , sum);
      else ans = max(ans , max(sum , (-sum)));
      for(int i = 0 ; i < curr -1 ; i++) a[i] = a[i+1] - a[i];
      curr--;
   }
   cout << ans << '\n';
}

int main(){
    int t ;
    cin >> t ;
    while(t-- ) solve();
}
