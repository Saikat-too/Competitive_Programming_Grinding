#include <bits/stdc++.h>
#include <cstring>

using namespace std;
using ll = long long;
constexpr ll inf = 1e18;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, m, q;
  cin >> n >> m >> q;

  vector<vector<ll>> dist(n, vector<ll>(n, inf));
  for (int i = 0; i < m; i++) {
    ll a, b, c;
    cin >> a >> b >> c;
    --a, --b;
    dist[a][b] = min(dist[a][b], c);
    dist[b][a] = min(dist[b][a], c);
  }

  for (int i = 0; i < n; i++)
    dist[i][i] = 0;

  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }

  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    if (dist[a][b] == inf)
      cout << -1 << ' ';
    else
      cout << dist[a][b] << '\n';
  }
  return 0;
}
