#include<bits/stdc++.h>
#include <queue>
using namespace std ;
using i64 = long long ;

void solve(){
   int n  , m;
   cin >> n  >> m ;
   priority_queue<i64> a , b ;

   for(int i = 0 ; i < n ; i++){
       int x ;
       cin >> x ;
       a.push(x);
   }
   for(int i = 0 ; i < m ; i++){
       int x ;
       cin >> x ;
       b.push(x);
   }

   while(!a.empty()){
       if(b.empty() || b.size() > a.size()){
           cout << "NO" << '\n';
           return  ;
       }
       i64 x = b.top();
       b.pop();

       if(x < a.top()){
           cout << "NO" << '\n';
           return ;
       }

       if(x == a.top()){
           a.pop();
       }
       else{
           b.push(x/2);
           b.push((x+1)/2);
       }

   }

  if(!b.empty()){
      cout << "NO" << '\n';
      return ;
  }

 cout << "YES" << '\n';


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t ;
    while(t-- ) solve();
}
