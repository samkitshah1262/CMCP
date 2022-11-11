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
	long long int i,n,x,y,a,b,c,sam=0,p,q,r;
    cin>>n>>p>>q>>r;
    vl dp0(n);
    vl dp1(n);
    vl dp2(n);
    vl v;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }    
    dp0[0]=p*v[0];
    for(i=1;i<n;i++){
        dp0[i]=max(dp0[i-1],p*v[i]);
    }
    dp1[0]=dp0[0]+v[0]*q;
    for(i=1;i<n;i++){
        dp1[i]=max(dp1[i-1],dp0[i]+v[i]*q);
    }
    dp2[0]=dp1[0]+v[0]*r;
    for(i=1;i<n;i++){
        dp2[i]=max(dp2[i-1],dp1[i]+v[i]*r);
    }
    cout<<dp2[n-1];

}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// ll tt;
	// cin>>tt;
	// while(tt--){
	// 	solve();
	// }
    solve();



	return 0;
}