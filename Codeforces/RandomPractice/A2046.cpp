#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n;
  ll sum = 0, mx = -1e18;
  cin >> n;
  vector a(2, vector<ll>(n));
  for (int row = 0; row < 2; row++) {
    for (int col = 0; col < n; col++) {
      cin >> a[row][col];
    }
  }
  for (int col = 0; col < n; col++) {
    sum += max(a[0][col], a[1][col]);
    mx = max(mx, min(a[0][col], a[1][col]));
  }
  sum += mx;
  cout << sum << "\n";
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
