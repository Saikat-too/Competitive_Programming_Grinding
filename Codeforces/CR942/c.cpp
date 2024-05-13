/*
  Saikat Singha 
  11.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

  int n;
  i64 k;
  cin >> n >> k;
  vector<i64>a(n);
  for(int i = 0;i<n;i++) cin >> a[i];
  sort(a.begin() , a.end());
  i64 mx = a[0];
  for(int i = 1;i<n;i++){
    if( (i * (a[i] - a[i-1])) <= k){
      mx = a[i];
      k -= i * (a[i] - a[i-1]);   
    }
    else{
      mx +=k/i;
      k %= i;
      break;
    }
  }
  i64 ans = mx*n + k;
  for(int i = 0;i<n;i++){
    if(a[i] > mx) ans++;
  }
  ans = max(0LL , ans-n+1);
  cout << ans << '\n';

  return;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}