#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {

  ll x, y, k;
  cin >> x >> y >> k;

  ll X = (x + k - 1) / k;
  ll Y = (y + k - 1) / k;

  ll ans = max(2 * X - 1, 2 * Y);

  cout << ans << '\n';

  return;
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
