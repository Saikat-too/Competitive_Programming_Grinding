#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;
  vector<ll> p(n);
  ll total = 0, sum = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    total += p[i];
  }

  for (int i = 0; i < 1 << n; ++i) {
    sum = 0;
    for (int j = 0; j < n; j++) {
      if (i >> j & 1)
        sum += p[j];
    }
    if (sum <= total / 2)
      ans = max(ans, sum);
  }

  cout << total - 2 * ans << '\n';

  return 0;
}
