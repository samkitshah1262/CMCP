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
    int dp[2][2];
    forn(i,2){
        forn(j,2){
            cin>>a;
            dp[i][j]=a;
            if(a==1){sam++;}
        }
    }
    if(sam==4){
        cout<<2<<endl;
        return;
    }
    if(sam==0){
        cout<<0<<endl;
        return;
    }
    else{
        cout<<1<<endl;
        return;
    }
    // if(sam==2){
    //     if(dp[0][0]==1 && dp[0][1]==1){
    //         cout<<1<<endl;
    //         return;
    //     }
    //     else if(dp[0][0]==1 && dp[1][0]==1){
    //         cout<<1<<endl;
    //         return;
    //     }
    //     else if(dp[0][1]==1 && dp[1][1]==1){
    //         cout<<1<<endl;
    //         return;
    //     }
    //     else if(dp[1][0]==1 && dp[1][1]==1){
    //         cout<<1<<endl;
    //         return;
    //     }
    //     else{
    //         cout<<2<<endl;
    //         return;
    //     }
    // }
    // else{
    //     cout<<1<<endl;
    //     return;
    // }
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