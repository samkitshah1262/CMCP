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
	long long int i,n,x,y,z,a,b,c,sam=0,st=0;
    cin>>n;
    cin>>x;
    x--;
    string s;
    cin>>s;
    vector<pair<int,char>> vp;
    vi v;
    if(x>=n/2){
        x=n-1-x;
    }
    y=x;
    z=x;
    forn(i,n/2){
        c=0;
        b=0;
        
        if(s[i]!=s[n-i-1]){
            //cout<<int(s[i])<<" si "<<int(s[n-i-1])<<" sin "<<endl;
            // c=min(abs(int(s[i])-int(s[n-i-1])),26-max(int(s[i]),int(s[n-1-i]))+min(int(s[i]),int(s[n-i-1])));
            // b=min(abs(int(s[i])-int(s[n-i-1])),26-max(int(s[i]),int(s[n-1-i]))+min(int(s[i]),int(s[n-i-1])));
            // // c=abs(i-x);
            // // b=abs(n-i-1-x);
            b=abs(s[i]-s[n-i-1]);
            if(b>=13){
                b=26-b;
            }  
            sam+=b;
            y=min(y,i);
            z=max(z,i);
        }
    }

    sam+=z-y+min(z-x,x-y);

    cout<<sam;
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