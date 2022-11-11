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
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<1<<" "<<1<<" "<<1<<endl;
        return;
    }
    if(a>=b && a>=c){
        if(a==b && a!=c){
            cout<<1<<" "<<1<<" "<<a-c+1<<endl;
            return;
        }
        else if(a!=b && a==c){
            cout<<1<<" "<<a-b+1<<" "<<1<<endl;
            return;
        }
        cout<<0<<" "<<a-b+1<<" "<<a-c+1<<endl;
    }
    else if(b>=a && b>=c){
        if(c==b && a!=b){
            cout<<b-a+1<<" "<<1<<" "<<1<<endl;
            return;
        }
        else if(a==b && b!=c){
            cout<<1<<" "<<1<<" "<<b-c+1<<endl;
            return;
        }
        cout<<b-a+1<<" "<<0<<" "<<b-c+1<<endl;
    }
    else if(c>=a && c>=b){
        if(c==a && c!=b){
            cout<<1<<" "<<c-b+1<<" "<<1<<endl;
            return;
        }
        else if(c==b && c!=a){
            cout<<c-a+1<<" "<<1<<" "<<1<<endl;
            return;
        }

        cout<<c-a+1<<" "<<c-b+1<<" "<<0<<endl;
    }
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