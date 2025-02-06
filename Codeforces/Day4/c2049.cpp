#include<bits/stdc++.h>
using namespace std  ;

using i64 = long long  ;

void solve(){
   int n , x , y;
   cin >> n >> x >> y ;
   --x , --y;
   vector<i64>res(n);
   for(int i = 0 ; i < n ; i++){
       res[(x+i) % n] = i % 2 ;
   }
   if(n % 2 == 1 || (x-y) % 2 == 0) res[x] = 2;
   for (auto u : res) cout << u << ' ';
   cout << '\n' ;
   return ;

}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t ;
   cin >> t ;
   while(t--) solve();
}
