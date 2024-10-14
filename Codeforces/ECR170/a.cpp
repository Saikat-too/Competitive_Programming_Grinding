#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {

  string s, t;
  cin >> s >> t;

  int ind = 0;

  for (int i = 0; i < (int)s.length(); i++) {
    if (s[i] == t[i])
      ind++;
    else
      break;
  }

  int ans = (int)s.length() + ((int)t.length() - ind);
  if (ind != 0)
    ans += 1;
  cout << ans << '\n';

  return;
}

int main() {

  int t;
  cin >> t;

  while (t--)
    solve();
}
