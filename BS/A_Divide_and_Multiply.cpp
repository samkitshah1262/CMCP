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

pair <int,int> pot(int k){
    int sam=0;
    pi p;
    while(k%2==0){
        sam++;
        k=k/2;
    }
    p.F=k;
    p.S=sam;
    return p;
}

void solve(){
	long long int i,n,x,y,a,b,c=0,sam=0;
    cin>>n;
    vi v;
    vector<pair<int,int>> vp;
    forn(i,n){
        cin>>a;
        v.pb(a);
        //c=c+a;
        pi p;
        p=pot(a);
        vp.pb(p);
        //sam=sam+pot(a);
        //cout<<pot(a)<<" a"<<endl;
    }
    sort(all(vp));
    forn(i,vp.size()){
        sam=sam+vp[i].S;
        c=c+vp[i].F;
    }
    c=c-vp[vp.size()-1].F;
    x=vp[vp.size()-1].F*pow(2,sam);
    cout<<x+c<<endl;
    // sort(all(v));
    // y=pot(v[v.size()-1]);
    // x=(v[v.size()-1]*pow(2,sam-y))+c-v[v.size()-1];
    // cout<<x<<endl;
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