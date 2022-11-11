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
        if(element!=INT64_MAX)
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
    cin>>n>>x;
    vector<vector<pair<ll,ll>>> v(n);
    forn(i,x){
        cin>>a>>b>>c;
        a--;b--;
        v[a].pb({b,c});
    }
    vector<ll> dis(n+1,INT64_MAX);
    dis[0]=0;
    set<pair<ll,ll>> sd;
    sd.insert(mp(0,0));
    while(!sd.empty()){
        pi t=*(sd.begin());
        sd.erase(sd.begin());
        int u=t.S;
        for(auto it=v[u].begin();it!=v[u].end();it++){
            if((*it).S+dis[u]<dis[(*it).F]){
                if(dis[(*it).F]!=INT64_MAX){
                    sd.erase(sd.find(mp(dis[(*it).F],(*it).F)));
                }
                dis[((*it).F)]=(*it).S+dis[u];
                sd.insert(mp(dis[(*it).F],(*it).F));
            }
        }
    }
    print(dis);
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