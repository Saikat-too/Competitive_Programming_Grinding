#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n, res = 0;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  res = n;
  for (int i = 0, j = 0; i < n - 1; i++) {
    while (j + 1 < n && a[i] + a[i + 1] > a[j + 1]) {
      j += 1;
    }

    res = min(res, i + n - j - 1);
  }

  cout << res << '\n';

  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
    solve();
}
