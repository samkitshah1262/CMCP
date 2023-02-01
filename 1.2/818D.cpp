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

const int N = 1e5;
long long fact[N + 5], factinv[N + 5], mod = 1e9 + 7;

 
int binpow(int x, int y) {
    long long a = 1;
 
    while (y) {
        if (y & 1) a = a * x % mod;
 
        x = (long long) x * x % mod;
        y >>= 1;
    };
 
    return (int) a;
}
void precomp() {
    fact[0] = fact[1] = factinv[0] = factinv[1] = 1;
 
    for (int i = 2; i <= N; i++)
        fact[i] = fact[i - 1] * i % mod;
    
    factinv[N] = binpow(fact[N], mod - 2);
    for (int i = N - 1; i > 1; i--)
        factinv[i] = factinv[i + 1] * (i + 1) % mod;
}
long long C(int n, int k) {
    return (long long) fact[n] * factinv[k] % mod * factinv[n - k] % mod;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    precomp();
    int n, k; cin >> n >> k;
 
    k = min(k, n);
 
    long long ans = 0;
    for (int i = 0; i <= k; i++)
        ans = (ans + C(n, i)) % mod; 
    cout << ans;
    return 0;
}