#include <bits/stdc++.h>
#include <cstring>
using namespace std;

const int mxN = 1e5;
vector<int> adj[mxN], p;
bool ok = true;
int n, m;

void dfs(int i) {
  if (p[i] == -1) {
    p[i] = 1;
  }
  for (auto u : adj[i]) {
    if (p[i] == p[u])
      ok = false;
    if (p[u] != -1)
      continue;
    if (p[i] == 1) {
      p[u] = 2;
      dfs(u);
    } else if (p[i] == 2) {
      p[u] = 1;
      dfs(u);
    }
  }
  return;
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
  p.assign(n, -1);
  for (int i = 0; i < n; i++) {
    dfs(i);
  }

  if (!ok)
    cout << "IMPOSSIBLE" << '\n';
  else {
    for (auto u : p)
      cout << u << ' ';
    cout << '\n';
  }

  return 0;
}
