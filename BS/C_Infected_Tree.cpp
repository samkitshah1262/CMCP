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

void dfs(ll root,ll par,vvl& adj,vl& dp,vl& vc,vl& vk){
    dp[root]=0;
    vc[root]=1;
    for(auto child:adj[root]){
        if(child == par) continue;
        dfs(child,root,adj,dp,vc,vk);
        vc[root] += vc[child];
    }
     
     
    vector<int> mine;
    for(auto x: adj[root]) {
        if(x == par) continue;
        mine.pb(x);
    }
    if(mine.size() >=2)
    dp[root] = max(vc[mine[0]] - 1 + dp[mine[1]] , vc[mine[1]] -1 + dp[mine[0]]);
    
    else if(mine.size() == 1)
    dp[root] = vc[mine[0]] - 1;     
}

void solve(){
    long long int i,n,x,y,a,b,c,sam=0;
    cin>>n;
    vvl v(n+1);
    vl vc(n+1);
    vl dp(n+1);
    vl vk(n+1);
    forn(i,n-1){
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
        vk[x]++;vk[y]++;
    }
        dfs(1,-1,v,dp,vc,vk);
        cout << dp[1] << endl;
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