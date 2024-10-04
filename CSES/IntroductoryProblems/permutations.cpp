#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << '\n';
    return 0;
  }

  if (n < 4 && n != 1) {
    cout << "NO SOLUTION" << '\n';
    return 0;
  }

  int odd = 0;
  int even = 0;
  if (n % 2 == 0) {
    odd = n - 1;
    even = n;
  } else {
    even = n - 1;
    odd = n;
  }
  cout << odd << ' ';
  while (odd > 1) {
    if (odd == 1)
      break;
    odd -= 2;
    cout << odd << ' ';
  }
  cout << even << ' ';
  while (even > 2) {
    if (even == 2)
      break;
    even -= 2;
    cout << even << ' ';
  }

  cout << '\n';

  return 0;
}
