#include <bits/stdc++.h>

using namespace std;
string s;
void dfs(int i, vector<int> &v, vector<bool> &ok, int cnt) {
  i--;
  if (ok[i] != true && s[i] == '0')
    cnt += 1;
  else if (ok[i])
    return;
  ok[i] = true;

  dfs(v[i], v, ok, cnt);

  return;
}

void solve() {

  int n;
  cin >> n;

  vector<int> v(n);
  vector<int> ans(n);
  vector<bool> ok(n, false);
  int cnt = 0;
  for (int i = 0; i < n; i++)
    cin >> v[i];

  cin >> s;

  for (int i = 0; i < n; i++) {
    dfs(i + 1, v, ok, cnt);
    ans[i] = cnt;
    cnt = 0;
    ok.assign(n, false);
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << ' ';
  }

  cout << '\n';

  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
