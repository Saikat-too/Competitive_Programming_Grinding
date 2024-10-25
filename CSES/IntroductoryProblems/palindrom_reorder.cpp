#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  string s;
  cin >> s;
  int n = (int)s.length();
  int ch[26] = {}, cnt = 0;

  for (char c : s)
    ++ch[c - 'A'];
  for (int i = 0; i < 26; i++)
    cnt += ch[i] & 1;

  if (cnt > 1) {
    cout << "NO SOLUTION" << '\n';
    return 0;
  }

  string ans;

  for (int i = 0; i < 26; i++) {
    if (ch[i] & 1 ^ 1) {
      for (int j = 0; j < ch[i] / 2; j += 1)
        ans += (char)('A' + i);
    }
  }
  cout << ans;

  for (int i = 0; i < 26; i++) {
    if (ch[i] & 1) {
      for (int j = 0; j < ch[i]; j++) {
        cout << (char)('A' + i);
      }
    }
  }

  reverse(ans.begin(), ans.end());

  cout << ans;

  return 0;
}
