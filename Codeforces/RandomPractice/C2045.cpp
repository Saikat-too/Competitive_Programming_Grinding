#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  string s, t;
  cin >> s >> t;
  int n = s.length(), m = t.length();
  map<string, bool> yes;
  string s1 = "", ans = "";
  int length = 4e5;
  for (int i = 0; i < n; i++) {
    s1 += s[i];
    for (int j = m - 1; j >= 0; j--) {
      string t1 = t.substr(j + 1, m);
      string conc = s1 + t1;
      // cout << conc << ' ';
      if (yes[conc]) {
        if (conc.length() < length) {
          length = conc.length();
          ans = conc;
        }

      } else
        yes[conc] = true;
    }
  }

  // cout << '\n';

  if (ans == "")
    cout << -1 << '\n';
  else
    cout << ans << '\n';
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  t = 1;
  for (int i = 0; i < t; i++)
    solve();
}
