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

const int Md = 1e9+7;

void dfs(int i,vvi v,vector<bool> & vb){
    if(vb[i]) return;
    vb[i] = true;
    for(int j=0;j<v[i].size();j++){
        if(v[i][j]==1){
            dfs(j,v,vb);
        }
    }
    // return;
}

typedef pair<int,int> pii;

int N, M, a, b, ds[100001];
vector<pii> ans;
int find(int u){
    if(ds[u] < 0)   return u;
    ds[u] = find(ds[u]);
    return ds[u];
}

bool merge(int u, int v){
    u = find(u); v = find(v);
    if(u == v)  return false;
    if(ds[u] < ds[v])   swap(u, v);
    ds[v] += ds[u];
    ds[u] = v;
    return true;
}


void solve(){
    long long int i,n,x,y,a,b,c,sam=0;
    // cin>>n>>x;
    // vvi v(n,vi(n,0));
    // forn(i,x){
    //     cin>>a>>b;
    //     a--;b--;
    //     v[a][b] = 1;
    //     v[b][a] = 1;
    // }
    // forn(i,n){
    //     v[i][i] = 1;
    // }
    // vector<bool> vb(n,false);
    // vi ans;
    // forn(i,n){
    //     if(!vb[i]){
    //         dfs(i,v,vb);
    //         sam++;
    //         ans.pb(i);
    //     }
    // }
    // cout<<sam-1<<endl;
    // if(sam-1>0){
    //     for(int i=0;i<ans.size()-1;i++){
    //         cout<<ans[i]+1<<" "<<ans[i+1]+1<<endl;
    //     }
    //     // cout<<endl;
    // }
    scanf("%d %d", &N, &M);
    for(int i = 1; i <= N; i++) ds[i] = -1;
    for(int i = 0; i < M; i++){
        scanf("%d %d", &a, &b);
        merge(a, b);
    }

    for(int i = 1; i < N; i++)
        if(merge(i, i+1))
            ans.push_back({i, i+1});

    printf("%d\n", (int) ans.size());
    for(pii P : ans)
        printf("%d %d\n", P.first, P.second);
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