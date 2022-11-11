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
	long long int i,n,x,y,a,b,c,sam=0,cnt=0;
    cin>>n>>x;
    vl v;
    vi vs;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    i=0;
    int j=0;
    while(true){
        if(j==n){
            vs.pb(cnt);
            break;
        }
        if(sam+v[j]<=x){
            sam=sam+v[j];
            j++;
            cnt++;
        }
        else{
            vs.pb(cnt);
            sam=sam-v[i];
            i++;
            cnt--;
        }
    }
    sort(all(vs));
    cout<<vs[vs.size()-1];
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// ll tt;
	// cin>>tt;
	// while(tt--){
		solve();
	// }



	return 0;
}