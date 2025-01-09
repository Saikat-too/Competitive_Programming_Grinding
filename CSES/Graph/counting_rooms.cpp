#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e3;
int n, m;
string s[mxN];

vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isOK(int i, int j) {
  return i >= 0 && i < n && j >= 0 && j < m && s[i][j] == '.';
}

void dfs(int i, int j) {
  s[i][j] = '#';
  for (int k = 0; k < 4; k++) {
    int dx = i + dirs[k].first;
    int dy = j + dirs[k].second;
    if (isOK(dx, dy)) {
      dfs(dx, dy);
    }
  }
}

int main() {
  cin >> n >> m;
  int ans = 0;
  for (int i = 0; i < n; i++)
    cin >> s[i];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (isOK(i, j)) {
        dfs(i, j);
        ans++;
      }
    }
  }

  cout << ans << '\n';
  return 0;
}
