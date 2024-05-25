/*
  Saikat Singha 
  25.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;
i64 big = 1e9;

void solve(){

    i64 n , k ; 
    cin >> n >> k;
    i64 sum = 0 , num=0;
    vector<i64>ans;
    for(i64 i = 0;sum<k;i++){
        sum+= (1<<i);
        if(sum < k ) ans.push_back(1<<i);
        else ans.push_back((k-1)-(sum-(1<<i)));

    }
    ans.push_back(2*k+1);
    for(i64 i = 0;i<25 && (int)ans.size()<25 ;i++){
         num = (1<<i) * (k+1);
        if((num>big)) break;
        ans.push_back(num);
        num=0;
    }
    
    cout << ans.size() << '\n';
    for(auto u:ans) cout << u << ' ';
    cout << '\n';

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}