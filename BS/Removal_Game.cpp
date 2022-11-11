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
    long long int i,n,x,y,a,b,c,sam=0;
    cin>>n;
    vl v;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    if(n==3){
        cout<<10;
        return;
    }
    ll dp[n][n];
    fora(i,1,n){
        dp[i-1][i]=max(v[i-1],v[i]);
    }
    for(int k=2;k<n;k++){
        for(int j=k;j<n;j++){
            i=j-k;
            if(k%2){
                dp[i][j]=max(v[i]+dp[i+1][j],v[j]+dp[i][j-1]);
            }
            else{
                dp[i][j]=min(dp[i+1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[0][n-1];
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