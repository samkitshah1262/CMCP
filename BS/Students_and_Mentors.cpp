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


void solve(int samkit){
    long long int i,n,x,y,a,b,c,sam=0;
    cin>>n;
    vector<pi> v;
    vi v2;
    forn(i,n){
        cin>>a;
        v.pb({a,i});
        v2.pb(a);
    }
    // vi v2=v;
    sort(all(v));
    sort(all(v2));
    // print(v2);
    vi vans(n,-1);
    if(n==1){
        vans.pb(-1);
        cout<<"Case #"<<samkit<<": ";
        forn(i,vans.size()){
            cout<<vans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    forn(i,n){
        x=v[i].F;
        int l=i,r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(v[m].F<2*x){
                l=m+1;
            }
            else if(v[m].F==2*x){
                l=m;
                break;
            }
            else{
                r=m-1;
            }
        }
        if(v[l].F>2*x || l>=n){
            l--;
        }
        if(l==i){
            if(i==0){
                vans[v[i].S]=-1;
            }
            else{
                vans[v[i].S]=v[i-1].F;
            }
        }
        else{
            vans[v[i].S]=v[l].F;
        }
    }
    cout<<"Case #"<<samkit<<": ";
    forn(i,vans.size()){
        cout<<vans[i]<<" ";
    }
    cout<<endl;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll tt;
    cin>>tt;
    int samkit=tt;
    while(tt--){
        solve(samkit-tt);
    }

//solve();
    

    return 0;
}