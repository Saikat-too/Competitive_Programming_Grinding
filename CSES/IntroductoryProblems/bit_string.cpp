#include <bits/stdc++.h>

using namespace std;

#define ll long long
ll mod = 1000000007;
int main() {
  ll x;
  cin >> x;
  ll ans = 1;
  for (int i = 1; i <= x; i++) {
    ans = (ans * 2) % mod;
  }

  cout << ans << '\n';
  return 0;
}
