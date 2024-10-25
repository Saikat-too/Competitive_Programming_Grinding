#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n;
  cin >> n;
  const int bit = n;
  for (int i = 0; i < (1 << n); i++) {
    bitset<bit> ans(i);
  }
}
