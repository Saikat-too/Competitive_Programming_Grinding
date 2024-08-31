#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define eb emplace_back

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n ;
    cin >> n ;
    vector<int>a(n) , cnt(n+1) , w(n);
    vector<pair<int,int>> pr; 
    for(int i = 0 ;i<n;i++){
        cin >> a[i]; 
        cnt[a[i]]+=1;
    }
    for(int i = 0; i<n;i++ ){
        cin >> w[i];
        pr.eb(w[i] , i);
    }
    sort(pr.begin() , pr.end() , [](const auto &a , const auto &b){
        return a.first < b.first;
    });

    int empty = 0 ;
    ll ans = 0 ;
    for(int i = 1;i<=n;i++) if(cnt[i]==0) empty+=1 ;
    //for(auto u:cnt) cout << u << ' ';
    //cout << '\n';
        for(auto u:pr){
            //cout << empty << '\n';
            //cout << u.first << ' '; 
            if(empty<1) break;
            if(cnt[a[u.se]]>1){
                ans+=u.fi;
                cnt[a[u.se]]-=1;
                empty-=1;
            }
            else continue;
            
        }


      
    
    cout << ans << '\n';
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