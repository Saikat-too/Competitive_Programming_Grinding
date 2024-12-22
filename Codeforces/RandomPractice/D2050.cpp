#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    int val = (int)(s[i] - '0'), pos = i;
    // cout << "Index Value : " << val << '\n';
    for (int j = i; j < min(i + 10, n); j++) {
      int best = s[j] - '0' - (j - i);
      if (best > val) {
        val = best;
        pos = j;
        // cout << "Position " << pos << '\n';
        // cout << "Best Value " << best << '\n';
      }
    }
    while (pos > i) {
      swap(s[pos], s[pos - 1]);
      pos--;
    }
    // cout << val << ' ';
    s[i] = char(val + '0');
  }

  cout << s << '\n';
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
