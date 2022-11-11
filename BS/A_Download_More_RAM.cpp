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
	int i,n,x,y,a,b,c,sam=0;
    cin>>n>>x;
    vector<pi> va; vi vb;
    vector<pi> v;
    forn(i,n){
        cin>>a;
        pi p;
        p.F=a;
        va.pb(p);
    }
    forn(i,n){
        cin>>b;
        pi p;
        p=va[i];
        p.S=b;
        v.pb(p);
    }
    sort(all(v));
    if(v[0].F>x){
        cout<<x<<endl;
        return;
    }
    else{
        forn(i,n){
            if(i==0){
                x=x+v[0].S;
            }
            else{
                if(v[i].F>x){
                    cout<<x<<endl;
                    return;
                }
                else{
                    x=x+v[i].S;
                }
            }
        }
        cout<<x<<endl;
    }
    
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