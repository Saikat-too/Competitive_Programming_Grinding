#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

  ll n;
  cin >> n;
  ll sum = n * (n + 1) / 2;

  vector<ll> v1, v2;
  if ((n * (n + 1) / 2) % 2 != 0) {
    cout << "NO" << '\n';
    return 0;
  }
  int ind1 = 0, ind2 = 0;

  if (n % 2 == 0) {
    v1.push_back(1);
    v2.push_back(2);
    ind1 = 1;
    ind2 = 2;

  } else {
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    ind1 = 2;
    ind2 = 3;
  }

  for (int i = 0; i < (n / 2) - 1; i++) {
    if (i % 2 == 0) {
      v1.push_back(ind1 + 3);
      v2.push_back(ind2 + 1);
      ind1 = ind1 + 3;
      ind2 = ind2 + 1;

    } else {
      v1.push_back(ind1 + 1);
      v2.push_back(ind2 + 3);
      ind1 = ind1 + 1;
      ind2 = ind2 + 3;
    }
  }
  sort(v1.rbegin(), v1.rend());
  sort(v2.rbegin(), v2.rend());
  cout << "YES" << '\n';
  cout << v1.size() << '\n';
  for (auto u : v1)
    cout << u << ' ';
  cout << '\n' << v2.size() << '\n';
  for (auto u : v2)
    cout << u << ' ';
  cout << '\n';

  return 0;
}
