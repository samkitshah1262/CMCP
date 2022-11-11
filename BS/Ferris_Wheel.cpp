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

const int M = 1e9+3;


void solve(){
	long long int i,n,x,k,y,a,b,c,sam=0;
    cin>>n>>k;
    //vl vf(M,0);
    vl v;
    forn(i,n){
        cin>>a;
        v.pb(a);
        //vf[a]++;
    }
    x=0;
    sort(all(v));
    for(int j=n-1;j>=0;j--){
        if(x>j){
            break;
        }
        if(v[j]==k){
            sam++;
            continue;
        }
        if(v[j]+v[x]<=k){
            sam++;
            x++;
        }
        else{
            sam++;
        }
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