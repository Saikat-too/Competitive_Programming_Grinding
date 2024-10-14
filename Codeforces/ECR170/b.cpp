#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll mod = 1e9 + 7;

int main() {

  int t;
  cin >> t;
  vector<ll> a(100001, 1);
  a[1] = 2;

  for (int i = 2; i <= 100001; i += 1) {
    a[i] = a[i - 1] * 2 % mod;
  }

  vector<ll> v1, v2;
  for (int i = 0; i < t; i++) {
    int x;
    cin >> x;
    v1.push_back(x);
  }

  for (int i = 0; i < t; i++) {
    int x;
    cin >> x;
    cout << a[x] << '\n';
  }

  return 0;
}
