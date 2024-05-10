/*
  Saikat Singha 
  10.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){
    
   int n;
   cin >> n;
  
  for(int i = 1;i<n-1;i++) cout << i << ' ' << i << '\n';

  cout << n << ' ' << n-1 << '\n' << n << ' ' << n << '\n';

  cout << '\n';
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