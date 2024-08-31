#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void solve() {

  int n, m;
  cin >> n >> m;
  vector<long long> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  long long max = *max_element(a.begin(), a.end());
  for (int i = 0; i < m; i++) {
    char c;
    cin >> c;
    long l, r;
    cin >> l >> r;

    if (max <= r && max >= l) {
      if (c == '+') {
        max += 1;
        cout << max << ' ';
      } else if (c == '-') {
        max -= 1;
        cout << max << ' ';
      }

    } else {
      cout << max << ' ';
    }
  }
  cout << '\n';
  return;
}

int main() {

  int t;
  cin >> t;
  while (t--)
    solve();
}
