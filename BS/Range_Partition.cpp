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


void solve(int sam){
	ll i,n,x,y,a=0,b=0,c=0,d=0,sum;
    cin>>n>>x>>y;
    sum=(n*(n+1))/2;
    if(sum%(x+y)==0){
        cout<<"Case #"<<sam<<": "<<"POSSIBLE"<<endl;
        vl v(n,1);
		ll sx= (sum*x)/(x+y);
		// ll sy= (sum*y)/(x+y);
		i=n-1;
		vl vans;
		vl vans2;
		while(true){
			if(sx-i<0){
				i--;
			}
			else if(sx-i>0){
				sx=sx-i;
				v[i]=0;
				i--;
				vans.pb(i+1);
			}
			else{
				v[i]=0;
				vans.pb(i+1);
				break;
			}
		}
		cout<<vans.size()<<endl;
		for(i=0;i<vans.size();i++){
			cout<<vans[i]<<" ";
		}
		cout<<endl;
    }
    else{
        cout<<"Case #"<<sam<<": "<<"IMPOSSIBLE"<<endl;
        return;
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	cin>>tt;
	forn(sam,tt){
		solve(sam);
	}

	return 0;
}