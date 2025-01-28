#include<bits/stdc++.h>
using namespace std ;
struct DisjointSet{
  vector<int> parent , size ;
  void init(int n){
      parent.resize(n+1) , size.resize(n+1);
      for(int i = 1  ; i<=n ; i++){
          parent[i] = i ;
          size[i] = 1 ;
      }
  }
  int find(int x){
      if(parent[x]==x) return x;
      else find(parent[x]);
  }
  void Union(int x , int y){
      x = find(x) , y =find(y);
      if(x == y) return ;
      if(size[x]<size[y]){
          parent[x]=y;
          size[y]+=size[x];
      }
      else{
          parent[y] = x ;
          size[x]+=size[y];
      }
  }
};
