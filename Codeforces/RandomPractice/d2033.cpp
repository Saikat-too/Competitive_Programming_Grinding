#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n), pref(n + 1, 0);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++) {
    pref[i + 1] = pref[i] + a[i];
  }
  map<ll, bool> mp;
  int ans = 0;
  for (int i = 0; i <= n; i++) {
    if (mp[pref[i]] == true) {
      ans += 1;
      mp.clear();
    }
    mp[pref[i]] = true;
  }

  cout << ans << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
