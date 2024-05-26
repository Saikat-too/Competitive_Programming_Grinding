/*
  Saikat Singha 
  24.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    i64 k , x , a , sum = 0;
    cin >> k >> x >> a ;
    for(int i=0;i<=x && sum<=a;i++){
        sum+= sum / (k-1) + 1;
        
    }
   if(sum<=a) cout << "YES" << '\n';
   else cout << "NO" << '\n';
    return ;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}