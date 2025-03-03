/*
    Saikat Singha
    01.03.2025
*/

#include<bits/stdc++.h>
using namespace std ;
using i64 = long long ;

void solve(){
    int n ;
    cin >> n ;
    i64 sum = 0 ;
    vector<int>res(n+1) , ind;
    for(int i = 1 ; i <= n ; i++){
        res[i] = i;
        sum +=i;
        i64 sq = sqrt(sum);
        if(sq * sq ==sum) ind.push_back(i);

    }
    for(auto u : ind){
        if(u == n ) {
            cout << -1 << '\n';
            return ;
        }
        swap(res[u] , res[u+1]);

    }

    for(int i = 1 ; i<=n ; i++){
        cout << res[i] << ' ';
    }
    cout << '\n';


}

int main(){
    int t ;
    cin >> t ;
    while(t--) solve();
    return 0 ;
}
