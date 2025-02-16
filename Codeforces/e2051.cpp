#include<bits/stdc++.h>
#include <cstddef>
#include <ios>

using i64 = long long ;

void solve(){
    int n  , k ;
    std::cin >> n >> k ;
    std::vector<std::pair<i64 ,i64>>a(n);
    std::map<i64,i64>mp;
    std::vector<i64>neg(n);
    for(int i = 0 ; i < n ; ){
       int x ,  y ;
       std::cin >> x >> y ;
       a[i] = {x , y};
       mp[x]+=1;
       neg[i] = y;
    }
    sort(neg.rbegin() , neg.rend());
    sort(a.begin() , a.end());
    i64 neg_review = 0 , ans = 0 ,big = 1e9 ;
    for(int i = 0 ; i < n  ; i++){
        if(a[i].second > a[i].first && neg_review < k ){
            big = std::min(big , a[i].second);
            ans+=big;
            neg_review++;
        }
        else{
            big = std::min(big , a[i].first);
            ans+=big;

        }
    }
    for(int i = 0 ; i < k ; i++){
        i64 ans2 = neg[i] + neg[i] * mp[neg[i]];
            ans = std::max(ans2 , ans);
    }

    std::cout << ans << '\n';
}


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t ;
    std::cin >> t ;
    while(t--) solve();
}
