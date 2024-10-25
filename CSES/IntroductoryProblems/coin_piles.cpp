#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    ll a, b;
    cin >> a >> b;

    if (a > b)
      swap(a, b);
    if ((a + b) % 3 == 0 && (a * 2 >= b))
      cout << "YES" << '\n';

    else
      cout << "NO" << '\n';
  }

  return 0;
}
