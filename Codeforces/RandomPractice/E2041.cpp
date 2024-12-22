#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  vector<int> ans(3);
  if (a <= 0 & b <= 0) {
    ans[0] = b;
    ans[1] = b;
    ans[2] = a * 3 - (ans[0] + ans[1]);
  }
  if (a > 0 && b > 0) {
    ans[0] = b;
    ans[1] = b;
    ans[2] = a * 3 - (ans[0] + ans[1]);
  }
  if (a <= 0 && b > 0) {
    ans[1] = b;
    ans[2] = b;
    ans[0] = a * 3 - 2 * b;
  }

  if (a > 0 && b <= 0) {
    ans[0] = b;
    ans[1] = b;
    ans[2] = a * 3 - (ans[0] + ans[1]);
  }
  cout << 3 << '\n';
  for (auto u : ans)
    cout << u << ' ';

  cout << '\n';

  return 0;
}
