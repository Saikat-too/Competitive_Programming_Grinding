#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;
  array<int, 2> a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i][1] >> a[i][0];
  }
  sort(a, a + n);
  ll ans = 0, last = 0;
  for (int i = 0; i < n; i++) {
    if (a[i][1] >= last) {
      ++ans;
      last = a[i][0];
    }
  }

  cout << ans << '\n';
  return 0;
}
