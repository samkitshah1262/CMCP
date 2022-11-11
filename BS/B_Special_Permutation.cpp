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
    cin>>n>>a>>b;
    vi v(n,-1);
    if(a>n/2+1 || b<n/2){
        cout<<-1<<endl;
        return;
    }
    if(b==n/2 && a<b){
        cout<<-1<<endl;
        return;
    }
    if(a==n/2+1 && b>a){
        cout<<-1<<endl;
        return;
    }
    vi va;
    vi vb;
    va.pb(a);
    vb.pb(b);
    i=n;
    x=1;
    while(x!=n/2){
        if(i==b){
            sam=1;
        }
        else{
            va.pb(i);
            x++;
            v[i-1]=0;
        }
        i--; 
    }
    v[a-1]=0;
    forn(i,va.size()){
        cout<<va[i]<<" ";
    }
    forn(i,v.size()){
        if(v[i]==-1){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
    return;
    
    // for(i=1;i<b+1;i++){
    //     if(i==a){
    //         continue;
    //     }
    //     else{
    //         vb.pb(i);
    //     }
    // }
    // forn(i,va.size()){
    //     cout<<va[i]<<" ";
    // }
    // forn(i,vb.size()){
    //     cout<<vb[i]<<" ";
    // }
    // cout<<endl;
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