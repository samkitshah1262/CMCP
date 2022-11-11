#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;


#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl '\n'
#define forn(i, n) for(ll i = 0; i < n; i++)
#define fora(i, a, n) for(ll i = a; i < n; i++)
#define inp(e) int e; cin >> e
#define inpl(e) ll e; cin >> e
#define inps(e) string e; cin >> e
#define T int tt; cin >> tt; while(tt--)


template<typename U>
void print(U arr) {
    for(auto element: arr) {
        cout << element << " ";
    }
    cout << endl;
}

// read and write into files, rather than standard i/o
void setup(string s) {
    freopen((s+".in").c_str(), "r", stdin);
    freopen((s+".out").c_str(), "w", stdout);
}

const int M = 1e9+7;


// string ss(string s){
//     int i = 0;
//     int n=s.size();
//     for (int j = 0; j <=n-1; j++) {
//         if (s[i] == s[j])
//             i++;
//     }
//     if (i == n) {
//         return s;
//     }
//     string remain_rev = s.substr(i, n);
//     reverse(remain_rev.begin(), remain_rev.end());
//     return remain_rev + ss(s.substr(0, i)) + s.substr(i);   
// }

string shortestPalindrome(string s) {
    int n = s.size();
    string rev(s);
    // reverse(rev.begin(), rev.end());
    string s_new = rev + "#" + s;
    int n_new = s_new.size();
    vector<int> f(n_new, 0);
    for (int i = 1; i < n_new; i++) {
        int t = f[i - 1];
        while (t > 0 && s_new[i] != s_new[t]) {
            t = f[t - 1];
        }
        if (s_new[i] == s_new[t]) {
            ++t;
        }
        f[i] = t;
    }
    return rev.substr(0, n - f[n_new - 1]) + s;
}

void solve(){
    long long int i,n,x,y,a,b,c,sam=0;
    cin>>n;
    string s;
    cin>>s;
    string ans=shortestPalindrome(s);
    cout<<ans<<endl;

}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll tt;
    cin>>tt;
    while(tt--){
        solve();
    }

//solve();
    

    return 0;
}