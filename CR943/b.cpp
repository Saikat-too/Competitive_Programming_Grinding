/*
  Saikat Singha 
  07.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int n , m ;
    cin >> n >> m;
    vector<char>a(n);
    vector<char>b(m);
    for(int i = 0;i<n;i++) cin >> a[i];
    for(int j = 0;j<m;j++) cin >> b[j];
    int a_one = 0,a_zero =0,b_one=0,b_zero=0,k=0;
    /*for(int i = 0;i<n;i++) a[i] == 1 ? a_one+=1 : a_zero+=1;
    for(int i = 0;i<m;i++) b[i] ==1 ? b_one+=1 : b_zero+=1;*/

    int j = -1,i;
    bool match = false;
    for( i = 0;i<n;i++){
      match = false;
      for(int k = j+1 ;k<m;k++){
        if(a[i]==b[k]){
          j=k;
          match = true;
          break;
        }else continue;
      }
      if(match == false) break;
    }

  cout << i << '\n';
  return ;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();

    return 0 ;

}