#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
  ll l, r, L, R;
  cin >> l >> r >> L >> R;
  ll ans = 0;
  if (r < L || R < l) {
    ans = 1;
  } else {

    ans = min(r, R) - max(l, L);
    if (l != L)
      ans += 1;
    if (r != R)
      ans += 1;
  }

  cout << ans << '\n';
  return;
}

int main(int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
