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
    long long int i,n,x,y,a,b,c,same=INT32_MAX,samo=INT32_MAX,flag=0,flag2=0;
    cin>>n>>x;
    map<int,vi> m;
    vi v;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    forn(i,x){
        cin>>a>>b;
        // cout<<a<<" "<<b<<endl;
        m[a].pb(b);
        m[b].pb(a);
    }
    vector<pi> vp;
    if(x==0){
        cout<<0<<endl;
        return;
    }
    for(auto it:m){
        pi p;
        p.F=v[it.F-1];
        // cout<<p.F<<" pf"<<endl;
        p.S=x-it.S.size();
        // cout<<p.S<<" ps"<<endl;
        vp.pb(p);
    }
    sort(all(vp));
    // cout<<vp.size()<<endl;
    forn(i,vp.size()){
        if(vp[i].S%2==1 && flag==0){
            samo=0;
            samo+=vp[i].F;
            flag++;
        }
        else if(flag==1 && vp[i].S%2==1){
            samo+=vp[i].F;
            flag++;
            // flag2++;
        }
        if(!vp[i].S%2){
            same=0;
            same+=vp[i].F;
            // flag2++;
            break;
        }
        // cout<<1;
    }
    cout<<min(samo,same)<<endl;
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