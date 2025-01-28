#include<bits/stdc++.h>

using i64 = long long ;

void solve(){
   int n ;
   std::cin >> n ;
   std::vector<int>pref(2*n+1 ) , cnt(2*n);
   std::vector<std::pair<int,int>>pr(n);
   for(int i = 0 ; i < n ; i++){
       int x , y ;
       std::cin >> x >> y ;
       --x;
       pr[i] = {x , y};
       if(y-x == 1)cnt[x]++;
   }
   for(int i = 0 ; i<2*n ; i++){
       pref[i+1] = pref[i] + bool(cnt[i]);
       }
    for(int i = 0 ; i < n ; i++){
        auto [l , r] = pr[i];
        if((r-l == 1) ? (cnt[l] > 1) : (pref[r] - pref[l] == r-l) ){
            std::cout << '0';
        }else{
            std::cout << '1';
        }
    }
    std::cout << '\n';
    return ;
   }




int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std:: cin >> t ;
    while(t--) solve();
}
