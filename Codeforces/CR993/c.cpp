#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll mod = 1e9 + 7;

void solve() {
  ll m, a, b, c, rem = 0, ans = 0;
  cin >> m >> a >> b >> c;
  if (m <= a)
    ans += m;
  else if (m > a) {
    ans += a;
    rem += m - a;
  }

  if (m <= b)
    ans += m;
  else if (m > b) {
    ans += b;
    rem += m - b;
  }

  if (rem <= c)
    ans += rem;
  else if (rem > c) {
    ans += c;
  }

  cout << ans << '\n';
  return;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}
