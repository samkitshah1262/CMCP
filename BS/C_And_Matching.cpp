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
	long long int i,n,x,y,a,b,c,sam=0;
    cin>>n>>x;
    vector<pl> v;
    pl p;
    if(x==n-1){
        if(n==4){
            cout<<-1<<endl;
            return;
        }
        else{
            pl p1;pl p2;pl p3;
            p1.F=n-1;p1.S=n-2;
            p2.F=n-3;p2.S=1;
            p3.F=0;p3.S=2;
            for(i=3;i<n/2;i++){
                if(i==n-3 || i==n-2 || i==n-1){
                    continue;
                }
                else{
                    pl p;
                    p.F=i;
                    p.S=n-i-1;
                    v.pb(p);
                }
            }
        }
    }
    else{
    p.F=x;
    p.S=n-1;
    v.pb(p);
    for(i=0;i<n/2;i++){
        if(i==x || i==n-1-x){
            continue;
        }
        else if(i==0){
            pl p;
            p.F=0;
            p.S=n-1-x;
            v.pb(p);
        }
        else{
            pl p;
            p.F=i;
            p.S=n-1-i;
            v.pb(p);
        }
    }
    //sort(all(v));
    }
    forn(i,v.size()){
        cout<<v[i].F<<" "<<v[i].S<<endl;
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