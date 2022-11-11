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
	long long int i,n,x,y,a,b,c,sam;
    cin>>x>>y;
    a=x-y+1;
    sam=(a*(a-1))/2;
    if(x%y==0){
        b=x/y;
        c=((b*(b-1))/2)*y;
    }
    else{
        b=x/y + 1;
        c=((b*(b-1))/2)*(x%y) + (((b-1)*(b-2))/2)*(y-x%y);
    }
   
    cout<<c<<" "<<sam;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    solve();


	return 0;
}