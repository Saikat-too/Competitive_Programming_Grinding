#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  string s;
  cin >> s;
  int sum = 0, two = 0, three = 0;

  for (int i = 0; i < (int)s.length(); i++) {
    sum += s[i] - '0';
    if (s[i] == '2')
      two += 1;
    if (s[i] == '3')
      three += 1;
  }
  for (int i = 0; i <= min(two, 9); i++) {
    for (int j = 0; j <= min(three, 9); j++) {
      if ((sum + i * 2 + j * 6) % 9 == 0) {
        cout << "YES" << '\n';
        return;
      }
    }
  }
  cout << "NO" << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
    solve();
}
