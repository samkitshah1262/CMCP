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
	int i,n,x,y,a,b,c,sam=0,sum1=0,sum0=0;
    cin>>n;
    vi v0;
    vi v1;
    vi sumo;
    vi sumz;
    forn(i,n){
        cin>>a;
        //v.pb(a);
        if(i%2==0){
            v0.pb(a);
        }
        else{
            v1.pb(a);
        }
    }
    sort(v0.begin(),v0.end(), greater<int>());
    sort(all(v1));
    b=min(v0.size(),v1.size());
    vi vf;
    forn(i,b){
        vf.pb(v0[i]);
        sum0=sum0+v0[i];
        sumz.pb(sum0);
        vf.pb(v1[i]);
        sum1=sum1+v1[i];
        sumo.pb(sum1);
        cout<<v0[i]<<" "<<v1[i]<<" ";   
    }
    if(v0.size()>v1.size()){
        vf.pb(v0[v0.size()-1]);
        sumz.pb(sum0+v0[v0.size()-1]);
        cout<<v0[v0.size()-1]<<endl;
    }
    else{
        cout<<endl;
    }
    for(int l=0;l<min(sumz.size(),sumo.size());l++){
        if(l==0){
            x=sumz[0]*(sumo[sumo.size()-1-l]);
            sam=sam+x;
        }
        else{
            x=(sumz[l]-sumz[l-1])*(sumo[sumo.size()-1-l]);
            sam=sam+x;
        }
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