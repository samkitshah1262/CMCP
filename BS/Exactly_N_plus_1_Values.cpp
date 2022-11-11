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
	long long int i,n,x,y,a,k,b,c,sam=0;
    cin>>n;
    vl v;
    x=pow(2,n);
    y=x;
    fora(i,1,n){
        y=y-pow(2,i)+1;
        v.pb(pow(2,i)-1);
    }
    a=y;
    //cout<<a<<" -a"<<endl;
    if(a%2==0){
        v.pb(a/2);
        v.pb(a/2);
    }
    else{
        k=a;
    while(k!=0){
        k=k/2;
        sam++;
        //cout<<sam<<endl;
    }
    sam--;
    v.pb(pow(2,sam)-1);
    v.pb(a-pow(2,sam)+1);
    }

    sort(all(v));
    forn(i,v.size()){
        cout<<v[i]<<" ";
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