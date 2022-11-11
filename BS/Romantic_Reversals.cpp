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
    cin>>n>>x;
    //cout<<n<<x;
    string s;
    char ch;
    deque<char> vc;
    deque<char> vans;
    forn(i,n){
        cin>>ch;
        //cout<<ch;
        vc.pb(ch);
    }
    // cin>>s;
    // cout<<s;
    // forn(i,n){
    //     cout<<vc[i];
    // }
    for(long long int j=n-1;j>x-1;j--){
        vans.push_front(vc[j]);
    }
    // forn(i,vans.size()){
    //     cout<<vans[i];
    // }
    for(long long int j=n-1;j>x-1;j--){
        //vans.push_front(vc[j]);
        vc.pop_back();
    }
    // forn(i,vc.size()){
    //     cout<<vc[i];
    // }
    i=0;
    while(vc.size()!=0){
        if(i%2==0){
        vans.push_front(vc[0]);
        vc.pop_front();
        i++;
        }
        else{
        vans.push_front(vc[vc.size()-1]);
        vc.pop_back();
        i++;
        }
    }
    forn(i,vans.size()){
        cout<<vans[i];
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