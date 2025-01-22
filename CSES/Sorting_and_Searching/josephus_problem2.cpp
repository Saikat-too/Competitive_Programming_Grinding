#include<bits/stdc++.h>
#include <cstddef>
using namespace std ;
using i64 = long long ;

int main(){
   std::ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   i64 n , k  ;
   cin >> n >> k ;
   i64 num = (k+1) % n;

   vector<i64>ans ;
   ans.push_back(num);
   for(int i = 1  ; i < n ; i++){
      num = (num+1+k) % n;
      if(num == 0) num = n;
      ans.push_back(num);
   }
   for (auto e : ans){
     cout << e << ' ';
   }
   cout << '\n';
   return 0 ;
}
