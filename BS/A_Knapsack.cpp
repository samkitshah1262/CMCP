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
    cin>>n>>x;
    vector<pair<ll,ll>> v;
    vl vans;
    forn(i,n){
        pair<ll,ll> p;
        cin>>a;
        p.F=a;
        p.S=i+1;
        v.pb(p);
    }
    forn(i,n){
        if(v[i].F>x){
            continue;
        }
        if(2*(v[i].F)>=x){
            vans.clear();
            vans.pb(v[i].S);
            sam=v[i].F;
        }
        else if(sam+v[i].F<=x){
            sam=sam+v[i].F;
            vans.pb(v[i].S);
        }
    }
    if(2*sam<x){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<vans.size()<<endl;
        forn(i,vans.size()){
            cout<<vans[i]<<" ";
        }
        cout<<endl;
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	cin>>tt;
	while(tt--){
		solve();
	}



	return 0;
}