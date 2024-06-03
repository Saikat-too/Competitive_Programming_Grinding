/*
  Saikat Singha 
  24.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){

    i64 n ;
    cin >> n;
    vector<int>ans;
    while(n>0){
        ans.push_back(n%10);
        n=n/10;
    }
    reverse(ans.begin() , ans.end());
    /*for (auto u:ans) cout << u << ' ';
    cout << '\n';*/
    int a = 0;
    for(int i = 0;i<(int)ans.size()-1;i++){
       
        for(int j = i+1 ; j<(int)ans.size();j++){
             bool divisible = false;
            a = ans[i]*10 + ans[j];
            for(int k = 2 ; k*k<=a;k++){
                if(a%k==0) {
                    divisible = true;
                    a=0;
                    break;
                }
            }
            if(!divisible) {
                cout << a << '\n';
                return ;
            }
        }
    }
    cout << "-1" << '\n';
    return ;

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}