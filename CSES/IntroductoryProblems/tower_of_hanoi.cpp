#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(vector<pair<int, int>> &ans, int n, int from, int to, int aux) {
  if (n == 1) {
    ans.emplace_back(from, to);
    return;
  }
  solve(ans, n - 1, from, aux, to);
  ans.emplace_back(from, to);
  solve(ans, n - 1, aux, to, from);
}
int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> ans;
  solve(ans, n, 1, 3, 2);

  cout << ans.size() << '\n';

  for (auto u : ans)
    cout << u.first << ' ' << u.second << '\n';

  return 0;
}
