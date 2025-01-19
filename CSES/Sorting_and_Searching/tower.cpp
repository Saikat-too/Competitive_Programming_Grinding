#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    int n ;
    cin >> n ;
    vector<ll>a(n) , v;
    for(int i = 0 ;i < n ; i++) cin >> a[i];
    for(auto e : a){
        int pos = upper_bound(v.begin() , v.end() , e) - v.begin();
        if(pos < (int)v.size()) v[pos] = e ;
        else v.push_back(e);
    }

    cout << v.size() << '\n';
    return 0 ;
}
