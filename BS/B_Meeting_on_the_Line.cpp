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


void help(map<int,int> & m,vector<pi> & v){
        int n=v.size();
        forn(i,n){
        m[v[i].F+v[i].S]++;
        m[-v[i].F+v[i].S]++;
        m[v[i].S]++;
    }
    return;
}

long double samkit(map<int,int> m){
    long double ans=0;
    ans+=m.begin()->F;
    ans+=m.rbegin()->F;
    ans=ans/2.0;
    return ans;
}

void solve(){
    long long int i,n,a,b,c,sam=0;
    cin>>n;
    vi v1,v2;
    forn(i,n){
        cin>>a;
        v1.pb(a);
    }
    forn(i,n){
        cin>>a;
        v2.pb(a);
    }
    vector<pi> v;
    forn(i,n){
        v.pb({v2[i],v1[i]});
    }
    map<int,int> m;
    help(m,v);
    long double ans=0;
    ans=samkit(m);
    cout<<fixed<<setprecision(10)<<ans<<endl;
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