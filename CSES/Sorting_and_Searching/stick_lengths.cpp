#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll avg = 0, ans = 0;
  sort(a.begin(), a.end());
  avg = a[n / 2];

  for (int i = 0; i < n; i++) {
    ans += abs(a[i] - avg);
  }

  cout << ans << '\n';

  return 0;
}
