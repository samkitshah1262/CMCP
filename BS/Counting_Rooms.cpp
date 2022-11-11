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

// const int M = 1e9+7;


// void dfs(vector<string> v, vector<vector<bool>> &dp,int i,int j,int n,int m){
//     if(i<0 || i>=n || j<0 || j>=m || v[i][j]=='#' || dp[i][j]){
//         return;
//     }
//     // if(dp[i][j]){
//     //     return;
//     // }
//     dp[i][j] = true;
//     if(v[i][j]=='.'){
//         dfs(v,dp,i+1,j,n,m);
//         dfs(v,dp,i-1,j,n,m);
//         dfs(v,dp,i,j+1,n,m);
//         dfs(v,dp,i,j-1,n,m);
//     }
// }

// void solve(){
//     long long int m,i,n,x,y,a,b,c,sam=0;
//     cin>>n>>m;
//     string s;
//     vector<string> v;
//     forn(i,n){
//         cin>>s;
//         v.pb(s);
//     }
//     vector<vector<bool>> dp(n,vector<bool>(m,false));
//     forn(i,n){
//         forn(j,m){
//             if(v[i][j]=='.' && dp[i][j]==false){
//                 sam++;
//                 dfs(v,dp,i,j,n,m);
//             }
//         }
//     }
//     cout<<sam;
// }

// int main(void) {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     // ll tt;
//     // cin>>tt;
//     // while(tt--){
//     //     solve();
//     // }

// solve();
    

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

char c;
int N, M, cnt;
int h[] = {1, -1, 0, 0}, v[] = {0, 0, 1, -1};
bool vis[1000][1000];

void dfs(int x, int y){
    vis[x][y] = true;
    for(int i = 0; i < 4; i++){
        int dx = x+h[i], dy = y+v[i];
        if(0 <= dx && dx < N && 0 <= dy && dy < M && !vis[dx][dy])
            dfs(dx, dy);
    }
}

int main(){
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf(" %c", &c);
            vis[i][j] = (c == '#');
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!vis[i][j]){
                dfs(i, j);
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
}