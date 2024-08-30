#include <bits/stdc++.h>
using namespace std;

void solve() {

  int l, r;
  cin >> l >> r;
  int cnt = 0;

  int odd = 0, even = 0;
  for (int i = l; i <= r; i++) {
    if (i % 2 == 1) {
      odd += 1;
    } else {
      even += 1;
    }
  }

  cnt = odd / 2;

  cout << cnt << '\n';

  return;
}

int main() {

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
