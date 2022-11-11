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
	long long int k,l,r,i,n,x,y,a,b,c,sam=0;
    cin>>n>>l>>r>>k;
    vl v;
    forn(i,n){
        cin>>a;
        if(a<l){
            continue;
        }
        else if(a>r){
            continue;
        }
        else{
            v.pb(a);
        }
    }
    sort(all(v));
    //i=0;
    //cout<<v.size()<<" vsize"<<endl;
    forn(i,v.size()){
        if(k<0){
            //sam--;
            break;
        }
        else if(k==0){
            break;
        }
        else{
            k=k-v[i];
            sam++;
        }
    }
    if(k<0){
        sam--;
    }
    cout<<sam<<endl;
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