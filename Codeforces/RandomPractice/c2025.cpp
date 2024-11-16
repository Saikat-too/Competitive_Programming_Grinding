#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  int j = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    j = max(i, j);
    while (j + 1 < n && a[j + 1] - a[j] <= 1 && a[j + 1] - a[i] < k) {
      j++;
    }

    ans = max(ans, j - i + 1);
  }
  cout << ans << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
