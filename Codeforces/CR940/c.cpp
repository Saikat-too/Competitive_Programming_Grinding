/*
  Saikat Singha 
  04.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int n , k ;
    cin >> n >> k;
    int freecells = 0;
  
    for (int i = 0;i<k;i++){
       int x ,y ;
       cin >> x >> y ;
       if(x==y)freecells+=1;
       else freecells+=2;

    }
    int m = n-freecells;
    vector<i64>dp(m+1);
    dp[0]=1;
    dp[1]=1;
    for(int i = 2 ;i<=m;i++){
        dp[i]=(dp[i-1] + 2ll*(i-1)*dp[i-2] % MOD)%MOD;
    }
    
    
    cout << dp[m] << '\n';
    return ;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}