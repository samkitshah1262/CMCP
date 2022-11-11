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
    cin>>n>>x>>y;
    vi v;
    forn(i,n){
        v.pb(i+1);
    }
    if(abs(x-y)>1){
        cout<<-1<<endl; 
        return;
    }
    if(n==2 && (x!=0 || y!=0)){
        cout<<-1<<endl;
        return;
    }
    if(x==0 && y==0){
        forn(i,v.size()){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(n==3 && x==1 && y==0){
        cout<<1<<" "<<3<<" "<<2<<endl;
        return;
    }
    else if(n==3 && x==0 && y==1){
        cout<<3<<" "<<1<<" "<<2<<endl;
        return;
    }
    // else{
    //     cout<<-1;
    //     return;
    // }
    if(x+y>n/2){
        cout<<-1<<endl; 
        return;
    }
    if(y>x){
        swap(v[0],v[1]);
        y--;
        i=2;
        while(y--){
            swap(v[i],v[i+1]);
            i=i+2;
        }

    }
    else if(y==x){
        i=1;
        while(y--){
            swap(v[i],v[i+1]);
            i=i+2;
        }
    }
    else{
        i=1;
        y--;
        while(y--){
            swap(v[i],v[i+1]);
            i=i+2;
        }
        swap(v[v.size()-2],v[v.size()-1]);
    }
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