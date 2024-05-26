/*
  Saikat Singha 
  24.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){
    int n;
    cin >> n;
    vector<i64>odd , even , a(n) ;
    for(int i = 0;i<n;i++){
      i64 x;
      cin >> x;
      a[i]=x;
      if(x%2==0)even.push_back(x);
      else odd.push_back(x);
    }
  i64 ai = 0 , aj = 0;
  sort(odd.begin(),odd.end());
  sort(even.begin(),even.end());
  i64 ev  = (int)even.size(),od = (int)odd.size();
  if(ev>0 && od > 0){
    ai = even[0];
    aj = odd[0];
  } 
  else if(od==0){
    ai = even[0];
    for(int i = 1;i<ev;i++){
      if(even[i]%ai==0) continue;
      else {
        aj = even[i];
        break;
      }
    }
    if(aj==0) aj = even[1];
  }
  else if(ev==0){
    ai=odd[0];
    for(int i = 1;i<od;i++){
      if(odd[i]%ai==0)continue;
      aj=odd[i];
      break;
    }
    if(aj==0) odd[1];
  }
  for(int i=0 ;i<n;i++){
    if(a[i]%ai==0 || a[i]%aj==0)continue;
    cout << "NO" << '\n';
    return ;
  }

  cout << "YES" << '\n';

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}