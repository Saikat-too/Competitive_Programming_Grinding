/*
  Saikat Singha 
  04.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

int gcd(int a , int b ){
    return  b==0 ? a : gcd(b , a%b);
}

void solve(){
    
  
    int n ;
    cin >> n;
    int ans = -1e8;
    int max_number = 0;
    int bg ;
    for (int i = n-1 ; i>0;i--){
        bg = 0;
        bg = gcd(n , i ) + i ;
        if(bg > ans ){
            ans = bg;
            max_number= i;
        } 
       
    }
    cout << max_number << '\n';
    return ;
}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}