#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 1e5;
int n, m;
vector<int> adj[mxN], ans;
bool vis[mxN];

void dfs(int v) {
  vis[v] = 1;
  for (auto u : adj[v]) {
    if (!vis[u])
      dfs(u);
  }
}
int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      ans.push_back(i);
      dfs(i);
    }
  }

  cout << ans.size() - 1 << '\n';
  for (int i = 1; i < ans.size(); i++) {
    cout << ans[0] + 1 << ' ' << ans[i] + 1 << '\n';
  }
  return 0;
}
