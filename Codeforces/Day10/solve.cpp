/*
    Saikat Singha
    10.03.2025
*/

#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

void solve(){
    int n , x , sum = 0 ;
    cin >> n >> x ;
    vector<int>a(n);
    for(int i = 0 ;i < n ; i++) {
        cin >> a[i];
        sum+=a[i];
    }
    if(n%2==1 && n!=1){
        cout << "YES" << '\n';
        return ;
    }
    if(sum % n == 0){
        if(sum / n == x){
            cout << "YES" << '\n';
        }
    }
    else{
        cout << "NO" << '\n';
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t ;
    while(t--) solve();
    return 0 ;
}
