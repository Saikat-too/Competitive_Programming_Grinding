
#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll mod = 1e9 + 7;

void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.rbegin(), a.rend());

  ll rem = k, addition = 0;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      continue;

    addition = min(rem, a[i - 1] - a[i]);
    a[i] += addition;
    rem -= addition;
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      ans += a[i];
    else
      ans -= a[i];
  }

  cout << ans << '\n';
  return;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();

  return 0;
}
