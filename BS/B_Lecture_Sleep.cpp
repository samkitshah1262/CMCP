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
	long long int i,n,x,y=-1,a,b,c,sam=0;
    cin>>n>>x;
    vl v1;
    vl v2;
    forn(i,n){
        cin>>a;
        v1.pb(a);
    }
    forn(i,n){
        cin>>a;
        v2.pb(a);
    }
    forn(i,n){
        if(v2[i]==1){
            sam=sam+v1[i];
            v1[i]=0;
        }
    }
    forn(i,n){
        if(i==0){
            continue;
        }
        else{
            v1[i]=v1[i-1]+v1[i];
        }
    }
    forn(i,n-x+1){
        y=max(y,v1[i+x]-v1[i]);
    }
    cout<<sam+y;
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