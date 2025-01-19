#include<bits/stdc++.h>
using namespace std ;
using i64 = long long;

int main(){
    i64 x , n ;
    cin >> x >> n ;
    vector<i64>a(n);
    set<i64>s;
    map<i64 , i64>m;
    s.insert(0);
    s.insert(x);
    m[x] = 1 ;
    for(int i = 0 ; i < n ; i++){
       cin >> a[i];
       auto it = s.lower_bound(a[i]);
       auto r = *it ;
       --it;
       auto l = *it ;
       --m[r-l];
       if(!m[r-l]) m.erase(r-l);
       ++m[r-a[i]];
       ++m[a[i]-l];
       s.insert(a[i]);
       cout << ((--m.end())->first) << ' ';
    }

   cout << '\n';
   return 0 ;
}
