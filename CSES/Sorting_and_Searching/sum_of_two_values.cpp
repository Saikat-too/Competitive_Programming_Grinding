#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll n, x;
  cin >> n >> x;
  map<ll, int> mp;
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    if (mp.find(x - a) != mp.end()) {
      cout << mp[x - a] + 1 << ' ' << i + 1;
      return 0;
    }
    mp[a] = i;
  }

  cout << "IMPOSSIBLE" << '\n';
  return 0;
}
