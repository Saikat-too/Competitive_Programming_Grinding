#include<bits/stdc++.h>

using i64 = long long ;

void solve(){
   int n , m ;
   std::string s ;
   std:: cin >> n >> m  >> s;
   int x = 1 , y = 1 ;
   std::vector<std::vector<i64>> a(n+1 , std::vector<i64>(m+1));
   std::vector<i64>column_sum(m+1 , 0),row_sum(n+1 , 0);
   for(int i = 1 ; i <= n ; i++){
       for(int j = 1 ; j <= m ; j++){
           std::cin >> a[i][j];
           row_sum[i] += a[i][j];
           column_sum[j] += a[i][j];
       }
   }

   for(int i = 0 ; i<n+m-2 ; i++){
       if(s[i]=='D'){
           a[x][y] = -row_sum[x];
           column_sum[y] += a[x][y];
           x++;
       }
       else{
           a[x][y] = -column_sum[y];
           row_sum[x]+= a[x][y];
           y++;
       }
   }

   a[n][m] = -row_sum[n];
   for(int i = 1 ; i<=n ; i++){
       for(int j = 1 ; j<=m ; j++){
          std::cout << a[i][j] << ' ';
       }
       std::cout << '\n';
   }

  return ;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t ;
    std:: cin >> t ;
    while(t--) solve();
    return 0 ;
}
