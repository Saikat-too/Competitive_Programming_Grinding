/*
  Saikat Singha 
  07.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int n;
    cin >> n;
    vector<int>a(n-1);
    for(int i = 0;i<n-1;i++) cin >> a[i]; 
    vector<int>b(n);
    b[0] = a[0] + 1;
    if(n==2){
        cout << a[0]+1 << ' ' << 2*a[0]+1 ;
        cout << '\n';
        return ;
    }
    for(int i = 1;i<n-1;i++){
        int dim = a[i] / b[i-1];
        b[i] = b[i-1]*(dim+1) + a[i-1]; 

    }
   
    b[n-1] = b[n-2] + a[n-2];

    for (auto u :b ) cout << u << ' ';
    cout << '\n';

    return ;
}

int main(){
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}