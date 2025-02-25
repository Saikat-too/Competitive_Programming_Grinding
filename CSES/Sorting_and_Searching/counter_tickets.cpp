#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll n, m;
  cin >> n >> m;

  set<array<int, 2>> s;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    s.insert({a, i});
  }

  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    auto it = s.lower_bound({x + 1, 0});
    if (it == s.begin())
      cout << -1 << '\n';
    else {
      --it;
      cout << (*it)[0] << '\n';
      s.erase(it);
    }
  }

  return 0;
}
