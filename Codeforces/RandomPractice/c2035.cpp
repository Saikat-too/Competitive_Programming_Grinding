#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n;
  cin >> n;
  int k = __lg(n);
  vector<int> a(n);
  int ans = 0;
  vector<bool> vis(n + 1);
  if (n % 2 == 0) {
    ans = (2 << k) - 1;
    a[n - 1] = 1 << k;
    a[n - 2] = (1 << k) - 1;
    a[n - 3] = (1 << k) - 2;
    a[n - 4] = 1;
    a[n - 5] = k == 2 ? 5 : 3;
    for (int i = n - 5; i < n; i++)
      vis[a[i]] = true;

    for (int i = 0, x = 1; i < n - 5; i++) {
      while (vis[i])
        x++;
      a[i] = x;
      vis[x] = true;
    }
  } else {
    ans = n;
    a[n - 1] = n;
    a[n - 2] = n - 1;
    a[n - 3] = (1 << k) - 1;
    a[n - 4] = 1;
    a[n - 5] = 2;
    for (int i = n - 5; i < n; i++)
      vis[a[i]] = true;
    for (int i = 0, x = 1; i < n; i++) {
      while (vis[i])
        x++;
      a[i] = x;
      vis[x] = true;
    }
  }
  cout << ans << '\n';
  for (int i = 0; i < n; i++)
    cout << a[i] << "\n"[i == n - 1];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
    solve();
}
