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
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))

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

int n;
int arr[55];

void solve(){
	//long long int i,n,x,y,a,b,c,sam=0;
    // cin>>n;
    // vi v;
    // n=2*n;
    // forn(i,n){
    //     cin>>a;
    //     v.pb(a);
    // }
    // sort(all(v));
    // for(i=0;i<n;i=i+2){
    //     swap(v[i],v[i+1]);
    // }
    // forn(i,n){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    cin>>n;
		rep(x,0,2*n) cin>>arr[x];
		
		sort(arr,arr+2*n);
		
		rep(x,0,n) cout<<arr[x]<<" "<<arr[x+n]<<" ";
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