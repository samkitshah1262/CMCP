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
    vi v;
    forn(i,9){
        cin>>a;
        v.pb(a);
    }
    forn(i,9){
        if(i==0){
            sam=sam+v[0]+v[3]+v[1];
            if(sam%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            sam=0;
        }
        if(i==1){
            sam=sam+v[0]+v[1]+v[2]+v[4];
            if(sam%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            sam=0;            
        }
        if(i==2){
            sam=sam+v[1]+v[2]+v[5];
            if(sam%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            sam=0;
            cout<<endl;
        }
        if(i==3){
            sam=sam+v[0]+v[4]+v[6]+v[3];
            if(sam%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            sam=0;            
        }
        if(i==4){
            sam=sam+v[1]+v[3]+v[4]+v[5]+v[7];
            if(sam%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            sam=0;  
        }
        if(i==5){
            sam=sam+v[2]+v[4]+v[5]+v[8];
            if(sam%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            sam=0;
            cout<<endl;    
        }
        if(i==6){
            sam=sam+v[3]+v[7]+v[6];
            if(sam%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            sam=0;    
        }
        if(i==7){
            sam=sam+v[7]+v[6]+v[8]+v[4];
            if(sam%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            sam=0;    
        }
        if(i==8){
            sam=sam+v[8]+v[5]+v[7];
            if(sam%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
            sam=0;    
        }
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// ll tt;
	// cin>>tt;
	// while(tt--){
	// 	solve();
	// }
    solve();



	return 0;
}