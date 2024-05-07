/*
  Saikat Singha 
  07.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    int n , k , pB , pS;
    cin >> n >> k >> pB >> pS ;
    vector<int>a(n+1),p(n+1);
    for(int i = 1;i<=n;i++) cin >> p[i];
    for(int i = 1 ; i<=n;i++) cin >> a[i];
    
    auto f = [&] (int i)  { /* it is always better to use labmda function and function in general a good practice migh do it frequently*/
        i64 sum = 0 , res=0;
        for(int j = 0;j<k and j<n ; j+=1 , i=p[i]){
            res  = max(res , sum + (i64)(k-j)*a[i]);
            sum+=a[i];
        }
        return res;
    };
    
    i64 B_score = f(pB);
    i64 S_score = f(pS);

    if(B_score > S_score) cout << "Bodya" << '\n';
    else if(S_score > B_score) cout << "Sasha" << '\n';
    else cout << "Draw" << '\n';

    return ;

}

int main(){
    
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();
    
    return 0 ;
}