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
	long long int i,n,x,y,a,b=INT64_MIN,c=INT64_MIN,sam=0,flag=0;
    cin>>n>>x;
    vl v;
    vl vans(n+1,INT64_MIN);
    vans[0]=0;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    for(i=0;i<n;i++){
        sam=0;
        for(ll j=i;j<n;j++){
            sam+=v[j];
            vans[j-i+1]=max(vans[j-i+1],sam);
        }
    }
    vl vf(n+1,0);
    forn(i,n+1){
        flag=0;
        forn(j,n+1){
            flag=max(flag,vans[j]+min(i,j)*x);
        }
        vf[i]=flag;
    }
    forn(i,vf.size()){
        cout<<vf[i]<<" ";
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