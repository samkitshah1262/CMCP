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
    long long int n,x,y,a,b,c,sam=0,ans=0;
    cin>>n;
    vl v1;
    vl v2;
    forn(i,n){
        cin>>a>>b;
        v1.pb(a);
        v2.pb(b);
    }
    sort(all(v1));
    sort(all(v2));
    int i=0,j=0;
    while(i<n && j<n){
        if(v1[i]<v2[j]){
            sam++;
            i++;
        }
        else if(v1[i]>v2[j]){
            sam--;
            j++;
        }
        ans=max(ans,sam);
    }
    cout<<ans;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // ll tt;
    // cin>>tt;
    // tt=1;
    // while(tt--){
    //     solve();
    // }

    solve();
    

    return 0;
}