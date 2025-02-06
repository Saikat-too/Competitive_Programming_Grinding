#include<bits/stdc++.h>
#include <cstddef>
using namespace std;
using i64 = long long ;

void solve(){
   int n , k  ;
   cin >> n >> k ;
   vector<i64>a(n),b(n);
   vector<pair<i64,i64>> events;
   for(int i = 0 ; i < n ; i++) cin >> a[i];
   for(int i = 0 ; i < n ; i++) cin >> b[i];
   for(int i = 0 ; i < n ; i++){
       events.emplace_back(a[i] , 1);
       events.emplace_back(b[i] , 2);
   }
  sort(events.rbegin() , events.rend());
  i64 ans = 0 ;
  int neg = 0 , cnt  = 0 ;
  for( int i = 0 ; i < (int)events.size() ; i++){
      auto [v , kv] = events[i] ;
      if(kv==1){
          neg--;
      }
      else {
          neg++;
          cnt++;
      }
      if((neg <= k && (i+1 == events.size() || events[i+1].first!=v))){
          ans = max(ans , v*cnt);
      }
  }
  cout << ans << '\n';
  return ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t ;
    while(t--) solve();
}
