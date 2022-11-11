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
	int i,n,x,y,a,b,c,sam=0,flag=0,k=1,c2=0;
    cin>>n;
    vi v;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
	vi ans;
	forn(i,n){
		if(v[i]!=i+1){
			b=i+1;
			c2=1;
			// cout<<"Sam";
			break;
		}
		else{
			ans.pb(i+1);
		}
	}
	for(i=n-1;i>=0;i--){
		if(v[i]==b){
			flag=1;
			c=i;
		}
		if(v[i]==b-1){
			flag=0;
			break;
		}
		if(flag==1){
			ans.pb(v[i]);
		}
	}
	for(i=c+1;i<n;i++){
		ans.pb(v[i]);
	}
	if(c2!=1){
		forn(i,v.size()){
			cout<<v[i]<<" ";
		}
		cout<<endl;
		return;
	}
	forn(i,ans.size()){
		cout<<ans[i]<<" ";
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