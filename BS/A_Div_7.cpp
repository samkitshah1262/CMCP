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

set<int> v7;

void solve(){
	int i,n,x,y,a,b,c,sam=0;
    string s;
    cin>>s;
    n=stoi(s);
    if(n%7==0){
        cout<<n<<endl;
        return;
    }
    else{
        cout<<n/10*10+7-(n/10*10)%7<<endl;
        return;
        // forn(i,s.size()){
        //     if(i==0){
        //         for(int j=1;j<10;j++){
        //             x=j*pow(10,s.size()-1)+stoi(s)-(int(s[0])-48)*(pow(10,s.size()-1));
        //             if(x%7==0){
        //                 cout<<x<<endl;
        //                 return;
        //             }
        //         }
        //     }
        // }
        auto lower=v7.lower_bound(n);
        if(lower!=v7.end()){
            x=*lower;
        }
        auto upper=v7.upper_bound(n);
        if(upper!=v7.end()){
            y=*upper;
        }
        if(n-x<y-n){
            cout<<x<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	cin>>tt;
	
    for(ll i=1;i<150;i++){
        v7.insert(7*i);
    }
    while(tt--){
		solve();
	}



	return 0;
}