/*
  Saikat Singha 
  24.05.2024

*/
/* 1 2 3 4 7 9 100  2 2 3 3 5 6 7 9  1 2 2 3 4 4
   1 2  4 6 1 3 5  2 4 1 3 1 3


*/
#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){
    int n ;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i<n;i++) cin >> a[i];
    sort(a.begin() , a.end());
    
    n = (int)a.size();
    vector<int>ans;
    ans.push_back(a[0]);
    int oc = 0;
    for( int i = 1 ;i<n;i++){
      if(a[i] > a[i-1]){
        if(a[i] == a[i-1]+1)oc++;
        ans.push_back(a[i]-a[i-1]);
      }}
      int ind = -1 ; 
      for(int i = 0 ;i<(int)ans.size();i++){
        if(ans[i]!=1){
          ind = i ; 
          break;
        }
      }
      if(ind==-1){
        cout << (oc%2==0 ? "Alice":"Bob") << '\n';
        return ;
      }
      cout << (ind%2==1 ? "Bob":"Alice") << '\n';

    
    
  
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}