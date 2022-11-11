#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;


#define all(y) begin(y), end(y)
#define rall(y) rbegin(y), rend(y)
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
	int i,n,y,x,a,b,c,sam=0;
    cin>>n;
    cout<<n;
    vvi v;
    forn(i,2){
        vi temp;
        forn(j,n){
            cin>>a;
            temp.pb(a);

        }
        v.pb(temp);
    }
    cout<<1;
    y=0;x=0;
    while(true){
        cout<<1;
        if(v[y+1][y]!=1 && y+1<=n-1){
            y=y+1;
        }
        else if(v[y][x+1]!=1 && x+1<=1){
            x=x+1;
        }
        else if(v[y+1][x+1]!=1 && y+1<=n-1 && x+1<=1){
            x=x+1;
            y=y+1;
        }
        else{
            break;
        }
    }
    if(y==n-1 && x==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	cin>>tt;
    cout<<tt;
	while(tt--){
		solve();
	}
	return 0;
}