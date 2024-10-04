#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

  string s;
  cin >> s;

  int n = (int)s.length();

  int cnt = 1, ans = 1;

  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1])
      cnt += 1;
    else {
      ans = max(cnt, ans);
      cnt = 1;
    }
  }

  ans = max(cnt, ans);

  cout << ans << '\n';
  return 0;
}
