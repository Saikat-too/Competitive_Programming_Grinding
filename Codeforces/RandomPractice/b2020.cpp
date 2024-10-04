#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll issqrt(ll n) {
  ll x = sqrt(n);
  if (x * x > n)
    x--;

  return x;
}

void solve() {

  ll k;
  cin >> k;

  ll n = k + issqrt(k);

  if (n - issqrt(n) < k)
    n++;

  cout << n << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
