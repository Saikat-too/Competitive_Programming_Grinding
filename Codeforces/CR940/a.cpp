/*
  Saikat Singha 
  25.04.2024

*/

#include<bits/stdc++.h>
using namespace std;

void solve(){

  int n;
  cin >> n;
  vector<int>a(n);
  int ans = 0;
  for(int i = 0 ;i<n;i++) {
    cin >> a[i];
  }
  map<int,int> mp;
  for(int i = 0;i<n;i++) mp[a[i]]++;
  for(auto u:mp){
  
    if(u.second ==3 || u.second==4) ans++;
    if(u.second >=5){
      ans+= max(u.second/3,u.second/4);
    }
    
  }
  cout << ans << '\n';
}

int main(){

    int t;
    cin >> t;
    while(t--) solve();

}