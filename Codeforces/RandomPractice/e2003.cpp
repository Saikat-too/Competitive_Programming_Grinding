#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  ll n, res = 0;
  cin >> n;
  vector<ll> a(n + 1);
  vector<bool> vis(n + 1, false);
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      int cur = i;
      int len = 0;
      while (!vis[cur]) {
        len++;
        vis[cur] = true;
        cur = a[cur];
      }

      res += (len - 1) / 2;
    }
  }

  cout << res << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
