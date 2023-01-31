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

 
int ask (int x) {
    cout << "- " << x << endl;
    if (x == -1)
        exit(0);
    cin >> x;
    return x;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int cnt;
        cin >> cnt;
        int n = 0;
        int was = 0;
        while (cnt > 0) {
            n += 1;
            int nw = ask(1 + was);
            int back = nw - cnt + 1;
            n += (1 << back) - 1;
            was = (1 << back) - 1;
            cnt = nw - back;
        }
        cout << "! " << n << endl;
    }
}

