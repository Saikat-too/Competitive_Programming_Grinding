#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    string s ; 
    cin >> s;
    bool rice = false ;
    rep(i , 3){
        if(s[i]=='M') break;
        if(s[i]=='R') rice = true;
    }
    cout << (rice? "Yes":"No") << '\n';
    return ;
}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;

    while (t--) {
        solve();
    }
    
    return 0;
}