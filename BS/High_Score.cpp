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


void solve(){
    long long int m,i,n,x,y,a,b,c,sam=0;
    cin>>n>>m;
    vl dis(n,INT64_MIN);
    vector<vector<ll>> v(m,vector<ll>(3));
    forn(i,m){
        cin>>a>>b>>c;
        a--;b--;
        // v[i].pb({a,b,c});
        // v[i].pb(b);
        // v[i].pb(c);
        v[i][0]=a;
        v[i][1]=b;
        v[i][2]=c;
    }
    dis[0]=0;
    fora(i,0,n-1){
        forn(j,m){
            ll u=v[j][0];
            ll vv=v[j][1];   
            ll wt=v[j][2];
            if(dis[u]!=INT64_MIN&&dis[u]+wt>dis[vv]){
                dis[vv]=dis[u]+wt;
            }
        }
    }
    forn(i,m){
        ll u=v[i][0];
        ll vv=v[i][1];   
        ll wt=v[i][2];
        if(dis[u]!=INT64_MIN&&dis[u]+wt>dis[vv]){
            // dis[vv]=dis[u]+wt;
            cout<<-1;
            return;
        }
    }
    cout<<dis[n-1];
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // ll tt;
    // cin>>tt;
    // while(tt--){
    //     solve();
    // }

solve();
    

    return 0;
}