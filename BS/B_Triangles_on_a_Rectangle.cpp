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
	long long int i,n,x,y,a,b,in,c,tempx1,tempx2,tempy,sam=0,p1,p2,p3,p4,p5,p6;
    cin>>x>>y;
    cin>>a;
    //vi v;
    forn(i,a){
        cin>>in;
        if(i==0){
            tempx1=in;
        }
        if(i==a-1){
            tempx2=in;
        }
    }
    p1=tempx2-tempx1;
    cin>>b;
    forn(i,b){
        cin>>in;
        if(i==0){
            tempx1=in;
        }
        if(i==b-1){
            tempx2=in;
        }
    }
    p2=tempx2-tempx1;
    cin>>a;
    forn(i,a){
        cin>>in;
        if(i==0){
            tempx1=in;
        }
        if(i==a-1){
            tempx2=in;
        }
    }
    p3=tempx2-tempx1;
    cin>>b;
    forn(i,b){
        cin>>in;
        if(i==0){
            tempx1=in;
        }
        if(i==b-1){
            tempx2=in;
        }
    }
    p4=tempx2-tempx1;
    p1=p1*y;
    p2=p2*y;
    p3=p3*x;
    p4=p4*x;
    sam=max(p1,p2);
    sam=max(sam,p3);
    sam=max(sam,p4);
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