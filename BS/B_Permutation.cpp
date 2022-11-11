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
	int i,n,x,y,a,b,c,sam=0,k;
	cin>>n;
	vi v;
	if(n==1){
		cout<<1<<endl;
		cout<<1<<endl;
		return;
	}
	// if(n%2){
	// 	i=1;
	// 	while(i<=n-1){
	// 		v.pb(i);
	// 		if(i<4){
	// 			i=i*2;
	// 		}
	// 		else{
	// 			i=i+2;	
	// 		}
	// 	}
	// 	for(i=3;i<=n;i=i+2){
	// 		v.pb(i);
	// 	}
	// }
	// else{
	// 	i=1;
	// 	// cout<<n<<endl;
	// 	while(i<n+1){
	// 		v.pb(i);
	// 		if(i<4){i=i*2;}
	// 		// cout<<i<<endl;
	// 		else{
	// 		i=i+2;
	// 		}	
	// 	}
	// 	for(i=3;i<=n;i=i+2){
	// 		v.pb(i);
	// 	}
	// }
	i=1;
	set<int> s;
	while(i<=n){
		v.pb(i);
		// if(i<4){
		// 	i=i*2;
		// }
		// else{
		// 	i=i+2;	
		// }
		s.insert(i);
		i=i*2;
	}
	for(i=3;i<=n;i++){
		// v.pb(i);
		// s.insert(i);
		if(s.find(i)==s.end()){
			v.pb(i);
			s.insert(i);
			int j=i*2;
			while(j<=n){
				if(s.find(j)==s.end()){
					v.pb(j);
					s.insert(j);
				}
				j=j*2;
			}
		}
	}
	cout<<2<<endl;
	forn(i,v.size()){
		cout<<v[i]<<" ";
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
    // solve();



	return 0;
}