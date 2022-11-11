// #include <bits/stdc++.h>

// using namespace std;

// using ll = long long;
// using vi = vector<int>;
// using vvi = vector<vector<int>>;
// using vl = vector<ll>;
// using vvl = vector<vector<ll>>;
// using pi = pair<int, int>;
// using pl = pair<ll, ll>;


// #define all(x) begin(x), end(x)
// #define rall(x) rbegin(x), rend(x)
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define endl '\n'
// #define forn(i, n) for(ll i = 0; i < n; i++)
// #define fora(i, a, n) for(ll i = a; i < n; i++)
// #define inp(e) int e; cin >> e
// #define inpl(e) ll e; cin >> e
// #define inps(e) string e; cin >> e
// #define T int tt; cin >> tt; while(tt--)


// template<typename U>
// void print(U arr) {
//     for(auto element: arr) {
//         cout << element << " ";
//     }
//     cout << endl;
// }

// // read and write into files, rather than standard i/o
// void setup(string s) {
//     freopen((s+".in").c_str(), "r", stdin);
//     freopen((s+".out").c_str(), "w", stdout);
// }

// const int Mf = 1e9+7;


// const int maxN = 1e5+1;

// int N, M, K, a, b, p[maxN], dist[maxN];
// bool vis[maxN];
// vector<int> G[maxN];
// queue<int> Q;

// void solve(){
//     long long int i,n,x,y,a,b,c,sam=0;
//     cin>>n>>x;
//     forn(i,x){
//         cin>>a>>b;
//         G[a].pb(b);
//         G[b].pb(a);
//     }
//     Q.push(1);
//     vis[1] = true;
//     while(!Q.empty()){
//         int u = Q.front();
//         Q.pop();
//         for(int v: G[u]){
//             if(!vis[v]){
//                 vis[v] = true;
//                 Q.push(v);
//                 p[v]=u;
//                 dist[v] = dist[u]+1;
//             }
//         }
//     }
//     if(!vis[n]){
//         cout<<"Impossible"<<endl;
//         return;
//     }
//     else{
//         cout<<dist[n]<<endl;
//         int k=n;
//         vi vans;
//         for(int i=dist[n];i>=0;i--){
//             vans[i]=k;
//             k=p[k];
//         }
//         print(vans);
//     }
// }

// int main(void) {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     // ll tt;
//     // cin>>tt;
//     // while(tt--){
//     //     solve();
//     // }

//     solve();
    

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;
const int maxN = 1e5+1;

int N, M, K, a, b, p[maxN], dist[maxN];
bool vis[maxN];
vector<int> G[maxN];
queue<int> Q;

int main(){
    scanf("%d %d", &N, &M);
    for(int i = 0; i < M; i++){
        scanf("%d %d", &a, &b);
        G[a].push_back(b);
        G[b].push_back(a);
    }

    Q.push(1);
    vis[1] = true;
    while(!Q.empty()){
        int u = Q.front(); Q.pop();
        for(int v : G[u]){
            if(!vis[v]){
                dist[v] = dist[u]+1;
                vis[v] = true;
                p[v] = u;
                Q.push(v);
            }
        }
    }

    if(!vis[N]){
        printf("IMPOSSIBLE\n");
        return 0;
    }

    int u = N;
    K = dist[N];
    vector<int> ans(K+1);
    for(int i = K; i >= 0; i--){
        ans[i] = u;
        u = p[u];
    }

    printf("%d\n", K+1);
    for(int i = 0; i <= K; i++)
        printf("%d%c", ans[i], (" \n")[i==K]);
}