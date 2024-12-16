#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll mod = 1e9 + 7;

void solve() {
  string a;
  cin >> a;
  int n = (int)a.length();
  string b;
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] == 'p')
      b += 'q';
    else if (a[i] == 'q')
      b += 'p';
    else
      b += a[i];
  }

  cout << b << '\n';

  return;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}
