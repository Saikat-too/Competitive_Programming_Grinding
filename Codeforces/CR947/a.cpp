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
  cin >> n ;
  vector<int>a(n);
  for(int i = 0;i<n;i++) cin >> a[i];
  int ind = -1;
  for(int i = 1;i<n;i++){
    if(a[i]>=a[i-1]) continue;
    ind = i;
    break;
  }
  vector<int>ans ; 
  if(ind==-1){
    cout << "YES" << '\n';
    return ;
  }
  
  for(int i = ind;i<n;i++)ans.push_back(a[i]);
  for(int i = 0;i<ind;i++)ans.push_back(a[i]);
  sort(a.begin(),a.end());
  for(int i = 0;i<n;i++){
    if(a[i]!=ans[i]){
      cout << "NO" << '\n';
      return ;
    }
  }
  
  cout << "YES" << '\n';
  return ;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}