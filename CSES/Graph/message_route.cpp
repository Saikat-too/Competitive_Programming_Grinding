#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ll long long
#define ar array

const int mxN = 1e5;
int n, m, p[mxN];
vector<int> adj[mxN], ans;

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  memset(p, -1, 4 * n);
  queue<int> q;
  q.push(0);
  p[0] = -2;
  while (q.size()) {
    int v = q.front();
    q.pop();
    for (int u : adj[v]) {
      if (p[u] < 0) {
        p[u] = v;
        q.push(u);
      }
    }
  }

  if (p[n - 1] < 0)
    cout << "IMPOSSIBLE" << '\n';
  else {
    int u = n - 1;
    while (u) {
      ans.push_back(u);
      u = p[u];
    }

    ans.push_back(0);
    cout << ans.size() << '\n';
    reverse(ans.begin(), ans.end());
    for (auto u : ans)
      cout << u + 1 << ' ';
  }

  cout << '\n';
  return 0;
}
