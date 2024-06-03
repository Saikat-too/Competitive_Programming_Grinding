/*
  Saikat Singha 
  29.05.2024

*/

#include<bits/stdc++.h>
using namespace std;

using i64 = long long ;

i64 MOD = 1e9+7;

void solve(){
    string s;
    cin >> s ;
    int n = (int)s.length();
    stack<char>v;
    int ind = 0 ;
    vector<bool>ok;
    for(int i = 0 ; i < n ; i++){
        if(ind==0 && s[i]=='-'){
            cout << "NO" << '\n';
            return;
        }
        if( ind <= 1 && s[i]=='0'){
            cout << "NO" << '\n';
            return ; 
        }

        if(s[i]=='1'){
            if(ind<1) continue;
            //cout << c << ' ';
            char c = v.top();
            if(c=='0'){
                cout << "NO" << '\n';
                return ;
            }
            else if(c==s[i]) continue;
            else{
                v.push('1');
            } 
        }
        else if(s[i]=='0'){

            char c = v.top();
            //cout << c << ' ';
            if(c=='1'){
                cout << "NO" << '\n';
                return ;
            }
            else if(c==s[i]) continue;
            else  v.push('0');
        }

        if(s[i]=='+') {
            v.push('2');
            ind++;
            
        }
        else if(s[i] == '-'){
            char c = v.top();
            if(c=='0' || c=='1') v.pop();
            v.pop();
            ind--;
           
        }

        


    }

    cout << "YES" << '\n';
    return ;

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();

}