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
	long long int i,n,x=0,y,a,b,c,sam=0,zero=0,ans=0;
    cin>>n;
    forn(i,n){
        cin>>a;
        if(a==1){
            sam++;
            ans++;
        }
        else if(a==0){
            zero++;
        }
    }
    forn(i,zero){
        ans=ans*2;
    }
    cout<<ans<<endl;
    // if(zero==0){
    //     x--;
    //     cout<<sam<<endl;
    //     return;
    // }
    // else if(sam==1 && zero!=0){
    //     x--;
    //     x=x+int(pow(2,zero))+sam;
    //     cout<<x<<endl;
    //     return;
    // }
    // else if(zero==n){
    //     x=int(pow(2,zero));
    //     cout<<x<<endl;
    //     return;
    // }
    // else if(sam==0){
    //     cout<<0<<endl;
    //     return;
    // }
    // else if(sam>1 && zero>0){
    //     x=sam*int(pow(2,zero));
    //     cout<<x<<endl;
    //     return;
    // }
    // x=x+int(pow(2,zero))+sam;
    // cout<<x<<endl;
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