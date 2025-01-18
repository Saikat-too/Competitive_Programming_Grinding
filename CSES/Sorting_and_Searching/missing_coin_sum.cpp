#include<bits/stdc++.h>
using namespace std ;
using ll  = long long ;

int main(){
 ll n ;
 cin >> n ;
 vector<ll>a(n);
 for(int i = 0 ; i < n ; i++) cin >> a[i] ;
 ll ans = 1LL ;
 sort(a.begin() , a.end());
 for(int i = 0 ; i < n ; i++){
     if(a[i] > ans){
         break ;
     }
     ans+=a[i];
 }

 cout << ans << '\n';
 return 0 ;

}
