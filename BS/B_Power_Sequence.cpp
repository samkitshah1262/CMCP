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

ll gr(ll x, ll i){
    double a;
    ll y,z;
    a=pow(x,(1.0/(i)));
    y=floor(pow(x,(1.0/(i))));
    z=ceil(pow(x,(1.0/(i))));
    // if(y==a){
    //     cout<<" idhar bc"<<endl;
    //     return int(pow(y,i));
    // }
    //cout<<y<<" y "<<i<<" i"<<endl;
    if(abs(x-ll(pow(y,i)))>=abs(x-ll(pow(z,i)))){
        // cout<<z<<"z"<<endl;
        // return ll(pow(z,i));
        return z;
    }
    else{
        // cout<<y<<endl;
        // return ll(pow(y,i));
        return y;
    }
}

ll ga(ll ve,ll vind,ll f){
    return abs(ve-ll(pow(f,vind)));
}

void solve(){
	long long int i,n,x,y,z,a,b,c,sam=0;
    cin>>n;
    vl v;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    if(n==1){
        cout<<v[0]-1;
        return;
    }
    sort(all(v));
    y=v[v.size()-1];
    z=gr(y,n-1);
    for(i=n-1;i>=0;i--){
        sam=sam+ga(v[i],i,z);
    }
    cout<<sam;
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