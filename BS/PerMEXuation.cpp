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
    cin>>n;
    deque<pi> v;
    //deque<pi> v2;
    vi vc;
    vi vv;
    vi v1;
    vi v2;
    char ch;
    forn(i,n+1){
        cin>>ch;
        if(ch=='1'){
            a=1;
        }
        else{
            a=0;
        }
        pi p;
        p.F=a;
        p.S=i+1;
        v.pb(p);
        v1.pb(a);
    }
    //cout<<v[0].F<<endl<<v[v.size()-1].F<<endl;
    if(v[0].F!=1 || v[1].F!=1 || v[v.size()-1].F!=1){
        cout<<"NO"<<endl;
        return;
    }
    vc.pb(0);
    x=1;
    for(i=2;i<n+1;i++){
        if(v1[i]==0){
            vc.pb(i);
        }
        else{
            vc.pb(x);
            x=i;
        }
    }
    cout<<"YES"<<endl;
    forn(i,vc.size()){
            cout<<vc[i]<<" ";
    }
    // forn(i,vv.size()){
    //     if(vv[i]==n){
    //         continue;
    //     }
    //     else{

        
    //         cout<<vv[i]<<" ";
    //     }
    // }
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