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
    vector<vector<int>> v(n,vector<int>(n));
    string s;
    forn(i,n){
        
    }
    for(i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<n;j++)
        {
            // cin>>v[i][j];
            if(s[j]=='1')
            {
                v[i][j]=1;
            }
            else
            {
                v[i][j]=0;
            }
        }
    }
    // for(i=0;i<n;i++){
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    forn(i,n){
        forn(j,n){
            int z=0,o=0;
            if(v[i][j]==1){
                o++;
            }
            else{
                z++;
            }
            if(v[n-1-j][i]==1){
                o++;
            }
            else{
                z++;
            }
            if(v[n-1-i][n-1-j]==1){
                o++;
            }
            else{
                z++;
            }
            if(v[j][n-1-i]==1){
                o++;
            }
            else{
                z++;
            }

            if(o>z){
                sam+=z;
            }
            else{
                sam+=o;
            }
        }
    }
    cout<<sam/4<<endl;
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