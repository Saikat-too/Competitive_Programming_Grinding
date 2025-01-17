#include <bits/stdc++.h>
#include <cstring>

using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<pair<int, int>>> adj(n);
  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    adj[a].push_back({b, c});
  }
  vector<ll> dist(n, LLONG_MAX);
  using T = pair<ll, int>;
  priority_queue<T, vector<T>, greater<T>> pq;
  int start = 0;
  dist[start] = 0;
  pq.push({0, start});
  while (!pq.empty()) {
    const auto [cdist, node] = pq.top();
    pq.pop();
    if (cdist != dist[node])
      continue;
    for (const pair<int, int> &i : adj[node]) {
      if (dist[i.first] > cdist + i.second) {
        pq.push({dist[i.first] = cdist + i.second, i.first});
      }
    }
  }

  for (int i = 0; i < n - 1; i++)
    cout << dist[i] << ' ';
  cout << dist[n - 1] << '\n';

  return 0;
}
