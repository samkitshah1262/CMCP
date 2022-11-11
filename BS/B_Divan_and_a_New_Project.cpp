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

bool sortb(const pair<ll,ll> &a,const pair<ll,ll> &b){
    return (a.F > b.F);
}

void solve(){
	long long int i,n,x,y,a,b,c=0,sam=0;
    cin>>n;
    vector<pair<ll,ll>> v;
    forn(i,n){
        pair<ll,ll> p;
        cin>>a;
        p.F=a;
        p.S=i+1;
        v.pb(p);
    }
    vector<pair<ll,ll>> vans;
    sort(all(v),sortb);
    pair<ll,ll> p;
    p.F=0; p.S=0;
    vans.pb(p);
    forn(i,v.size()){
        pair<ll,ll> p;
        if(i%2==0){
            c++;
            sam=sam+c*2*(v[i].F);
            p.F=v[i].S;
            p.S=c;
            vans.pb(p);
        }
        else{
            sam=sam+c*2*(v[i].F);
            p.F=v[i].S;
            p.S=-c;
            vans.pb(p);
            // c++;
        }
    }
    sort(all(vans));
    cout<<sam<<endl;
    forn(i,vans.size()){
        cout<<vans[i].S<<" ";
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



	return 0;
}