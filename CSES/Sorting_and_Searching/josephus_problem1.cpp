#include<bits/stdc++.h>
#include <cstddef>
#include <queue>
using namespace std ;
using i64 = long long ;

int main(){
   std::ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n  ;
   cin >> n ;
   queue<i64> q  ;
   vector<i64> ans ;
   for(int i = 1 ; i<=n ; i++)q.push(i);
   bool flag = false ;
   while(!q.empty()){
       int element = q.front();
       q.pop();
       if(flag) ans.push_back(element);
       else{
           q.push(element);
       }
       flag = !flag;
   }

   for(auto e : ans) cout << e << ' ';
   cout << '\n';
   return 0 ;
}
