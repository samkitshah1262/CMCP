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
	int i,x,y,a,b,c,sam;
    int n;
    cin>>n;
    sam=n-1;
    // float mat[n][n];
    // forn(i,n){
    //     forn(j,n){
    //         mat[i][j]=0;
    //     }
    // }
    vi v;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    if(n<3){
        cout<<0<<endl;
        return;
    }
    // forn(i,n){
    //     forn(j,n){
    //         x=(v[i]-v[j])/(i-j);
    //         mat[i][j]=x;
    //     }
    // }
    // forn(i,n){
    //     forn(i,j){

    //     }
    // }
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int cnt=2;
            for(int k=j+1;k<n;k++){
                if((v[k]-v[j])*(j-i)==(v[j]-v[i])*(k-j)){
                    cnt++;
                }
            }
            sam=min(sam,n-cnt);
            if(sam==i){
                break;
            }
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