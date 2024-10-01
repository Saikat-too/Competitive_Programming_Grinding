#include "bits/stdc++.h"
#include <vector>
using namespace std;

#define ll long long
void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  ll half = n / 2;
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a.begin(), a.end());

  if (n == 1 || n == 2) {
    cout << -1 << '\n';
    return;
  }

  ll ans = a[half] * (n * 2) - sum + 1;

  if (ans < 0)
    ans = 0;

  cout << ans << '\n';

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
