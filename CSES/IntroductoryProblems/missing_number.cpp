#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int main() {
  int n;

  cin >> n;

  vector<int> a(n - 1);
  for (int i = 0; i < n - 1; i++)
    cin >> a[i];
  sort(a.begin(), a.end());

  for (int i = 1; i <= n; i++) {
    if (i != a[i - 1]) {
      cout << i << '\n';
      return 0;
    } else
      continue;
  }

  return 0;
}
