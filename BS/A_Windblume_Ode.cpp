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


bool isc(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return false;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return true;
  
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return true;
  
    return false;
}

void solve(){
	int i,n,x,y,a,b,c,sam=0;
    cin>>n;
    vi v;
    forn(i,n){
        cin>>a;
        sam=sam+a;
        v.pb(a);
    }
    if(isc(sam)){
        cout<<v.size()<<endl;
        fora(i,1,n+1){
            cout<<i<<" ";
        }
    }
    else{
        forn(i,n){
            int k=sam;
            k=k-v[i];
            if(isc(k)){
                x=i;
                break;
            }
        }
        cout<<v.size()-1<<endl;
        forn(i,n){
            if(i==x){
                continue;
            }
            else{
                
                cout<<i+1<<" ";
            }
        }
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