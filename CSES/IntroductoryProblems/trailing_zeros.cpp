#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll n;
  cin >> n;
  int ans = 0;
  for (ll i = 5; i <= n; i *= 5) {
    ans += n / i;
  }

  cout << ans << '\n';
  return 0;
}
