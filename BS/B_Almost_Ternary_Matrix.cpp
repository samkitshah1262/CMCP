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

int dp[51][51];

void solve(){
    long long int i,n,x,y,a,b,c,sam=0;
    cin>>x>>y;
    forn(i,x){
        forn(j,y){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<endl;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll tt;
    cin>>tt;
    vi v1;
    vi v2;
    forn(i,51){
        if(i==0){
            v1.pb(0);
            v2.pb(1);
            v2.pb(2);
        }
        else{
            if(i==v1[v1.size()-1]+3){
                v1.pb(i);
                v1.pb(i+1);
            }
            if(i==v1[v2.size()-1]+3){
                v2.pb(i);
                v2.pb(i+1);
            }
        }
    }
    // forn(i,51){
    //     int oc=0,zc=0;
    //     fora(j,i,51){
    //         if(i==0 && j==0){
    //             dp[i][j]=1;
    //         }
    //         else{
    //             if(find(all(v1),i)!=v1.end() || find(all(v1),j)!=v1.end()){
    //                 dp[i][j]=1;
    //             }
    //             else{
    //                 dp[i][j]=0;
    //             }
    //         }
    //     }
    // }
    int j=0;
    forn(i,51){
        if(find(all(v1),i)!=v1.end()){
            dp[i][j]=1;
            dp[j][i]=1;
        }
        else{
            dp[i][j]=0;
            dp[j][i]=0;
        }
    }
    int c=1;
    int sam=0;
    for(int i=1;i<51;i++){
        // int sam=0;
        if(sam==2){
            c=1;
            sam=0;
        }
        for(int j=1;j<51;j++){
            if(c){
                if(dp[i-1][j]){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=1;
                }
            }
            else{
                if(dp[i-1][j]){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        sam++;
        c=0;
    }
    while(tt--){
        solve();
    }

//solve();
    

    return 0;
}