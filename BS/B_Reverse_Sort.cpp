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
	int i,n,x,y,a,b,c0=0,c1=0,sam=0,flag=0;
    cin>>n;
    // cout<<n;
    string s;
    cin>>s;
    vi v0;
    vi v1;
    vi va;
    vi vb;
    forn(i,n){
        // cin>>a;
        if(s[i]=='1'){
            a=1;
        }
        else{
            a=0;
        }
        // cout<<a<<" a"<<endl;
        if(a==1){
            v1.pb(i+1);
            sam=1;
            c1++;
        }
        else{
            sam=0;
            y=i+1;
            c0++;
            v0.pb(y);
        }
        va.pb(a);
        vb.pb(a);
    }
    // v.pb(y);
    sort(all(vb));
    forn(i,n){
        if(va[i]!=vb[i]){
            flag=1;
            break;
        }   
    }
    if(flag!=1){
        cout<<0<<endl;
        return;
    }
    i=n-1;
    vi vans;
    while(i>=0){
        if(c1==0){
            break;
        }
        if(va[i]==1){
            c1--;
        }
        if(va[i]==0){
            vans.pb(i+1);
            c1--;
        }
        i--;
    }
    x=vans.size();
    forn(i,n){
        if(x==0){
            break;
        }
        if(va[i]==1){
            vans.pb(i+1);
            x--;
        }
    }
    sort(all(vans));
    cout<<1<<endl;
    cout<<vans.size()<<" ";
    forn(i,vans.size()){
        cout<<vans[i]<<" ";
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