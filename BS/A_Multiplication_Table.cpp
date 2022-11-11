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
void print(U v) {
	for(auto element: v) {
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
    cin>>n>>x;
    vl v;
    for(i=1;i<=x;i++){
        if(i>n){
			break;
		}
		if(x%i==0 && x/i<=n && i<=n){
            v.pb(i);
        }
    }
//     int low = 0;
//    int high = v.size() -1;
//    int mid = (high+low)/2;
//    int index = -1;
//    while(low <= high){
//       mid =( low + high ) / 2;
//       if(v[mid] <= n){
//          index = mid;
//          low = mid+1;
//       }
//       else{
//          high=mid-1;
//       }
//    }
//    c=index+1;

   a=v.size();
    cout<<abs(a)<<endl;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	// cin>>tt;
	// while(tt--){
		solve();
	//}



	return 0;
}