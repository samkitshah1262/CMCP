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

bool ch(long long int n,int d){
    string s;
    stringstream ss;
    ss<<n;
    ss>>s;
    forn(i,s.size()){
        if(int(s[i])-48==d){
            return true;
        }
    }
    return false;
}

void solve(){
	long long int q,d,i,n,x,y,a,b,c,sam=0;
    cin>>q>>d;
    vl v;
    forn(i,q){
        cin>>a;
        v.pb(a);
    }
    forn(i,v.size()){
        x=v[i]%d;
        a=v[i];
        for(long long int j=1;j<=a/d;j++){
            if(ch((j*d)+x,d)){
                sam=1;
                break;
            }
        }
        if(sam==1){
            cout<<"YES"<<endl;
            //return;
            sam=0;
        }
        else{
            cout<<"NO"<<endl;
            //return;
            sam=0;
        }
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