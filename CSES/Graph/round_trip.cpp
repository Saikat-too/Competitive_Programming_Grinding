#include <bits/stdc++.h>
#include <cstring>
using namespace std;

const int mxN = 1e5;
vector<int> adj[mxN], parent, ans;
vector<bool> vis;
int n, m, cycle_end, cycle_start;

bool dfs(int u, int par) {
  vis[u] = true;
  for (int v : adj[u]) {
    if (v == par)
      continue;
    if (vis[v]) {
      cycle_end = u;
      cycle_start = v;
      return true;
    }
    parent[v] = u;
    if (dfs(v, parent[v]))
      return true;
  }

  return false;
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
  parent.assign(n, -1);
  vis.assign(n, false);
  cycle_start = -1;
  for (int i = 0; i < n; i++) {
    if (!vis[i] && dfs(i, parent[i]))
      break;
  }

  if (cycle_start == -1)
    cout << "IMPOSSIBLE" << '\n';
  else {
    ans.push_back(cycle_start + 1);
    for (int v = cycle_end; v != cycle_start; v = parent[v]) {
      ans.push_back(v + 1);
    }
    ans.push_back(cycle_start + 1);
    cout << ans.size() << '\n';
    for (auto u : ans)
      cout << u << ' ';
    cout << '\n';
  }

  return 0;
}
