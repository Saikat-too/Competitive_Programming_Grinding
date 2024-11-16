#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int res = 0;
  for (int i = n / 2; i >= 1; i--) {
    if (a[i] == a[i + 1] || a[n - i] == a[n - i + 1])
      swap(a[i], a[n - i + 1]);
  }

  for (int i = 1; i < n; i++)
    res += (a[i] == a[i + 1]);
  cout << res << '\n';
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
