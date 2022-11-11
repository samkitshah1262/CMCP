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
	long long int m,i,n,x,y,a,b,c=0,sam=0;
    cin>>n>>m;
    vector<pair<ll,pl>> v;
    forn(i,m){
        cin>>a>>b;
        pair<ll,pl> p;
        p.S.F=a;
        p.F=b;
        p.S.S=i+1;
        c+=b;
        v.pb(p);
    }
    sort(all(v));
    // if(m==2*n){
    //     cout<<c<<endl;
    //     for(i=0;i<n;i++){
    //         cout<<i+1<<" "<<m-i<<endl;
    //     }
    //     cout<<endl;
    //     return;
    // }
    vector<pl> vp;
    forn(i,n*2){
        sam+=v[i].F;
        vp.pb(v[i].S);
    }
    sort(all(vp));
    cout<<sam<<endl;
    forn(i,n){
        cout<<vp[i].S<<" "<<vp[2*n-i-1].S<<endl;
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