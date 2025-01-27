#include<bits/stdc++.h>
#include <cstddef>
using namespace std ;
using ll = long long ;

struct DisjointSet{
    vector<int>parent , sz ;
    int size ;
    void init(int n ){
        size = n ;
        parent.resize(n+1) , sz.resize(n+1);
        for(int i = 1  ; i<=n  ;i++){
            parent[i] = i;
            sz[i] = 1 ;
        }
    }
    int find(int x){
        if(parent[x] == x) return x ;
        return(parent[x]);
    }

    void Union(int x , int y){
        x = find(x) , y = find(y);
        if(x==y) return ;
        if(sz[x]<sz[y]){
            parent[x] = y;
            sz[y]+=sz[x];
        }
        else{
            parent[y]=x;
            sz[x]+=sz[y];
        }
    }
};

void solve(){
   int n , m1 , m2 ;
   cin >> n >> m1 >> m2 ;
   vector<pair<int,int>> f(m1),g(m2) ;
   for(int i = 0 ; i < m1 ; i++){
       int x , y ;
       cin >> x >> y ;
       f[i] = {x , y};
   }
   DisjointSet ds;
   ds.init(n+5);
   for(int i = 0 ; i < m2 ; i++){
       int x , y ;
       cin >> x >> y ;
       g[i] = {x , y};
       ds.Union(x,  y);
   }
   DisjointSet ds2 ;
   ds2.init(n+5);
   int res = 0 ;
   for(int i = 0 ; i < m1 ; i++){
      int x = f[i].first , y = f[i].second ;
      if(ds.find(x) != ds.find(y)) res++;
      else ds2.Union(x, y);
   }
   set<int>s1,s2;
   for(int i = 1 ; i<=n ; i++){
       s1.insert(ds.find(i));
       s2.insert(ds2.find(i));
   }
   cout << res + abs((int)s2.size()-(int)s1.size()) << '\n' ;
   return  ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ; cin >> t ;
    while(t--) solve();

    return 0 ;
}
