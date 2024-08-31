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
   string s , t ;
   cin >> s >> t ;
   for(int w = 1 ; w<sz(s) ; w++){
        string now = "";
        for( int c = 0 ;  c<w ; c++){
            string now = "";
            for(int i = c ; i<sz(s) ; i+=w) {
                now += s[i];
            }
            if(now == t){
                cout << "Yes" << '\n';
                return ;
            }
        }
   }
   cout << "No" << '\n';
   return ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;  // Uncomment this line if there are multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}