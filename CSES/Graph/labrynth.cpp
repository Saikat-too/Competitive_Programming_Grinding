#include <bits/stdc++.h>
#include <queue>
using namespace std;

const int mxN = 1e3;
int n, m, si, sj, ei, ej, dd[mxN][mxN];
string s[mxN], p[mxN];

vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {1, 0}, {0, -1}};
vector<char> pathdir{'L', 'R', 'U', 'D'};
bool isOK(int i, int j) {
  return i >= 0 && i < n && j >= 0 && j < m && s[i][j] == '.';
}

int main() {
  cin >> n >> m;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    for (int j = 0; j < m; j++) {
      if (s[i][j] == 'A')
        si = i, sj = j;
      if (s[i][j] == 'B')
        ei = i, ej = j, s[i][j] = '.';
    }
    p[i] = string(m, 0);
  }

  queue<array<int, 2>> qu;
  qu.push({si, sj});
  while (qu.size()) {
    array<int, 2> u = qu.front();
    qu.pop();
    for (int k = 0; k < 4; k++) {
      int di = u[0] + dirs[k].first;
      int dj = u[1] + dirs[k].second;
      if (!isOK(di, dj))
        continue;
      qu.push({di, dj});
      s[di][dj] = '#';
      dd[di][dj] = k;
      p[di][dj] = pathdir[k];
    }
  }

  if (p[ei][ej]) {
    cout << "Yes\n";
    string t;
    while (ei ^ si || ej ^ sj) {
      t += p[ei][ej];
      int d = dd[ei][ej] ^ 2;
      ei += dirs[d].first;
      ej += dirs[d].second;
    }
    reverse(t.begin(), t.end());
    cout << t.size() << '\n';
    cout << t << '\n';
  }

  return 0;
}
