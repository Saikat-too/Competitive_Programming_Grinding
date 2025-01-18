#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;
  ll ans = -1e18, mxn = -1e18;

  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    mxn = max(a, mxn + a);
    ans = max(ans, mxn);
  }

  cout << ans << '\n';

  return 0;
}
