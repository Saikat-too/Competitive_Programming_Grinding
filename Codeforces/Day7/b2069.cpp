#include<bits/stdc++.h>
using namespace std ;
using i64 = long long ;

void solve(){
   int n , m , neighbors = 0  , res = 0;
   cin >> n >> m ;
   vector<vector<int>>a(n , vector<int>(m));
   set<int>color;
   map<int,int>mp;
   for(int i = 0 ; i < n  ; i++){
       for(int j = 0 ; j < m ; j++){
          cin >> a[i][j];
          color.insert(a[i][j]);
          mp[a[i][j]] = 0;
       }
   }

   for(int i = 0 ; i < n ; i ++){
       for (int j = 0 ; j < m ; j++){
           if(i + 1 < n && a[i][j] == a[i+1][j] && mp[a[i][j]]==0){
               neighbors+=1;
               mp[a[i][j]] = 1;
           }
           if(j+1 < m && a[i][j] == a[i][j+1] && mp[a[i][j]]==0){
               neighbors+=1;
               mp[a[i][j]] = 1;
           }
       }
   }

  if(neighbors == 0) res = (int)color.size() -1;
  else res = (neighbors-1) * 2 + (color.size() - neighbors);
  cout << res << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t ;
    while(t--) solve();
    return 0 ;
}
