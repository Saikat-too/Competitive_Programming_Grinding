#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  bool first = false, middle = false, only = true, last = false, train = true;
  for (int i = 0; i < n; i++) {
    if (i == 0 && a[i] == 0)
      first = true;
    if (i != 0 && i != n - 1 && a[i] == 0)
      middle = true;
    if (i == n - 1 && a[i] == 0)
      last = true;
    if (a[i] != 0)
      only = false;
  }

  if (first) {
    int ind = -1;
    for (int i = 0; i < n; i++) {
      if (a[i] != 0) {
        ind = i;
        break;
      }
    }

    for (int i = ind; i < n; i++) {
      if (a[i] == 0) {
        train = false;
        break;
      }
    }
  }

  if (last) {
    int ind = -1;
    for (int i = n - 1; i >= 0; i--) {
      if (a[i] != 0) {
        ind = i;
        break;
      }
    }

    for (int i = ind; i >= 0; i--) {
      if (a[i] == 0) {
        train = false;
        break;
      }
    }
  }

  if ((!first) && (!last))
    train = false;

  if (only) {
    cout << 0 << '\n';
    return;
  }
  if ((first && !middle) || (last && !middle) || (!first && !middle && !last) ||
      train) {
    cout << 1 << '\n';
    return;
  }
  if (middle) {
    cout << 2 << '\n';
    return;
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
    solve();

  return 0;
}
