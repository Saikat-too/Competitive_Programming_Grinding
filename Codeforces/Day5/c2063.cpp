#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
void solve(){
   int n ;
   cin  >> n ;
   vector<vector<int>> a(n);
   for(int i = 0 ; i < n-1 ; i++){
       int  u , v ;
       cin >> u >> v ;
       u-- , v-- ;
       a[u].push_back(v);
       a[v].push_back(u);
   }
   int ans = 0 ;
   for(int i = 0 ; i < n ; i++){
       for(auto j : a[i]){
           ans = max(ans , (int)(a[i].size()+a[j].size())-2);
       }
   }
   multiset<int>s;
   for(int i = 0 ; i < n ; i++){
       s.insert((int)a[i].size());
   }
   for(int i = 0 ; i < n ; i++){
       s.erase(s.find((int)a[i].size()));
       for(int j : a[i]){
           s.erase(s.find((int)a[j].size()));
       }
       if(!s.empty()){
           ans = max(ans , (int)(a[i].size() + *s.rbegin())-1);
       }
       s.insert((int)a[i].size());
       for(int j : a[i]){
           s.insert((int)a[j].size());
       }
   }
   cout << ans << '\n' ;
   return  ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t ;
    while(t--) solve();

    return 0 ;
}
