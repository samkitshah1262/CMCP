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
	long long int i,n,x,y,a,b,c,sam=1,ans=1,cnt=1;
    cin>>n;
    vi v;
    forn(i,n){
        cin>>a;
        v.pb(a);
        if(i!=0 && v[i]==v[i-1]){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<0<<" "<<(n*(n-1))/2;
        return;
    }
    sort(all(v));
    x=v[v.size()-1]-v[0];
    forn(i,n-1){
        if(v[i]==v[i+1]){
            sam++;
        }
        else{
            break;
        }
    }
    for(int j=n-1;j>=1;j--){
        if(v[j]==v[j-1]){
            ans++;
        }
        else{
            break;
        }
    }
    //cout<<ans<<endl;
    cout<<x<<" "<<sam*ans;

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