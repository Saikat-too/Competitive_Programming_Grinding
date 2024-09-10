#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second

typedef long long i64;
typedef vector<int> vi;
typedef vector<i64> vl;
typedef pair<int, int> pii;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const i64 LINF = 1e18;

void solve() {
    i64 n , t ; 
    cin >> n >> t ; 
    string s ; 
    cin >> s ; 
    vector<int>a(n);
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    vector<int>neg_dir, pos_dir; 
    for(int i = 0 ; i<sz(s) ; i++){
        if(s[i]=='0') neg_dir.push_back(a[i]);
        else pos_dir.push_back(a[i]);
    }
    
    sort(neg_dir.begin() , neg_dir.end());
    sort(pos_dir.begin() , pos_dir.end());
    

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