#include<bits/stdc++.h>
using namespace std ;
using ll = long long  ;

int main(){
    ll n ;
    cin >> n ;
    vector<ll>a(n);
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    ll count = 0LL , big = 1e9 ;
    for(int i = 0 ; i < n-1 ; i++){
        if(a[i] < a[i+1]) continue ;
        else {
            if(a[i] > big) continue ;
            else{
                big = a[i];
                count+=1;
            }
        }
    }
    cout << count << '\n';
    return 0 ;
}
