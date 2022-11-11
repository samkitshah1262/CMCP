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
	int i,n,x=0,y=0,a,b,c,sam=1;
    string s;
    cin>>s;
    //cout<<s<<endl;
    forn(i,s.size()){
        if(s[i]=='0'){
            x++;
        }
        else{
            y++;
        }
    }
    // vi v;
    // forn(i,s.size()-1){
    //     if(s[i]==s[i+1]){
    //         sam++;
    //     }
    //     else{
    //         v.pb(sam);
    //         sam=1;
    //     }
    // }
    //v.pb(sam);
    if(x==0 || y==0){
        cout<<0<<endl;
        return;
    }
    // sort(all(v));
    // if(v[v.size()-1]<=min(x,y)){
        if(x==y){
            cout<<x-1<<endl;
            return;
        }
        cout<<min(x,y)<<endl;
    }
    // else{
    //     cout<<v[v.size()-1]<<endl;
    // }

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