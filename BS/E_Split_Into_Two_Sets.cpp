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

const int n_max = 200005;
vector<int> adj[n_max];
bool visited[n_max] ;
bool isOdd ;
int level[n_max];

void dfs(int vertex, int lvl, int par){
    visited[vertex] = true;
    level[vertex] = lvl;
    for(auto child : adj[vertex]){
        if(visited[child]){
            if(child==par)continue;
            // cout << "found " <<vertex << " " << child << " " << lvl << " " << level[child] << endl;
            int diff = abs(level[child]-lvl);
            if(diff%2==0){
                isOdd = true;
                return;
            }
            continue;
        }
        dfs(child,lvl+1,vertex);
    }
    visited[vertex] = false;
}
 
void solve(){
    isOdd = false;
    memset(visited,false,sizeof(visited));
    memset(level,0,sizeof(level));
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        adj[i].clear();
    }
    map<int,int> mp;
    bool check = false;
    set<pair<int,int>> edges;
    for(int i=0;i<n;i++){
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]++;
        edges.insert({min(a,b),max(a,b)});
        if(mp[a]>2 || mp[b]>2){
            check = true;
        }
    }
    if(check){
        cout << "NO" << endl;
        return ;
    }
    for(auto e : edges){
        // cout << "adding " << e.first << " " << e.second << endl;
        adj[e.first].push_back(e.second);
        adj[e.second].push_back(e.first);
    }
    for(int i=1;i<=n;i++){
        if(level[i]==0){
            dfs(i,1,0);
            if(isOdd)break;
        }
    }
    if(isOdd){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
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