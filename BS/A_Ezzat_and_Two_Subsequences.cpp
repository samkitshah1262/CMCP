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
	long double i,n,x=INT64_MIN,y,a,b,c,sam=0;
    cin>>n;
    //vl v;
    string s;
    forn(i,n){
        //cin>>a;
        //v.pb(a);
         cin >> s;
        a = stold(s);
        sam=sam+a;
        x=max(x,a);  
    }
    //sort(all(v));
    sam=sam-x;
    y=sam/(n-1)+x;
    cout<<setprecision(9);
    cout<<y<<endl;
    // forn(i,n){
    //     if(i==n-1){
    //         c=1;
    //     }
    //     else{
    //         sam=sam+v[i];
    //     }
    // }
    // x=(v[v.size()-1]+sam/(n-1));
   
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