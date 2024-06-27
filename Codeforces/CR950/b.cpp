o/*
  Saikat Singha 
  03.06.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){
    int n , m ;
    cin >> n >> m ;
    string s ;
    cin >> s ; 
    map < char , int> mp ;
    int ch['A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G'];
    for (auto u: ch){
        mp[u]=0;
    }
    for(int i  = 0; i<n ; i++){
        mp[s[i]]++;
    }
    
    int cnt = 0;
    for(auto u:mp){
        if(u.second < m) cnt+= (m-u.second);
    }
    cout << cnt << '\n';

    return ;

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}