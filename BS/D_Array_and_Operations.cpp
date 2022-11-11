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
    deque <long long int> v;
    cin>>n>>x;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    sort(all(v));
    // while(x--){
    //     if(floor(v[0]/v[v.size()-1])>floor(v[v.size()-2]/v[v.size()-1])){
    //     sam=sam+floor(v[0]/v[v.size()-1]);
    //     v.pop_back();
    //     v.pop_front();
    //     }
    //     else{
    //     sam=sam+floor(v[v.size()-2]/v[v.size()-1]);
    //     v.pop_back();
    //     v.pop_back();
    //     }
    // }
    int j=0;
    for(i=n-2*x;i<n-x;i++){
        sam=sam+floor(v[i]/v[i+x]);
        j++;
        //x--;
    }
    //cout<<sam<<"sam"<<endl;
    while(x--){
        v.pop_back();
        v.pop_back();
    }
    forn(i,v.size()){
        sam=sam+v[i];
    }
    //cout<<sam<<"sam"<<endl;
    
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