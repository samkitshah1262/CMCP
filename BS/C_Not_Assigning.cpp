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
    int m[n][n]={0};
    for(i=0;i<n-1;i++){
        cin>>x>>y;
        m[x-1][y-1]=1;
        m[y-1][x-1]=1;
    }
    forn(i,n){
        a=0;
        forn(j,n){
            if(m[i][j]==1){
                a++;
            }
        }
        if(a>2){
            cout<<-1<<endl;
            return;
        }
    }
    b=1;
    // cout<<n<<"hi"<<endl;
    forn(i,n-1){
        if(b%3==1){
            cout<<2<<" ";
            b++;
        }
        else if(b%3==2){
            cout<<5<<" ";
            b++;
        }
        else{
            cout<<11<<" ";
            b++;
        }
    }
    cout<<endl;
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