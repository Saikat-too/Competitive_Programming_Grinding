#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll n;
  cin >> n;

  set<array<int, 2>> s;

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    s.insert({a, 1});
    s.insert({b + 1, -1});
  }
  int ans = 0, c = 0;
  for (array<int, 2> ar : s) {
    c += ar[1];

    ans = max(ans, c);
  }

  cout << ans << '\n';

  return 0;
}
