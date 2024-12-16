#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll mod = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  set<int> s;
  vector<bool> vis(n + 1, false);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s.insert(a[i]);
  }

  vector<int> b;
  for (int i = 1; i <= n; i++) {
    if (s.count(i))
      continue;
    b.push_back(i);
  }

  vector<int> ans;
  int ind = 0;
  for (int i = 0; i < n; i++) {
    if (!vis[a[i]]) {
      ans.push_back(a[i]);
      vis[a[i]] = true;
    }

    else {
      ans.push_back(b[ind]);
      ind += 1;
    }
  }

  for (auto u : ans)
    cout << u << ' ';

  cout << '\n';

  return;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}
