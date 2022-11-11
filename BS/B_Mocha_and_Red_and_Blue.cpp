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
	int i,n,x,y,a,b,c,sam=0;
    string s;
    cin>>n;
    vector<char> v;
    vector<pair<int,char>> vc;
    cin>>s;
    forn(i,s.size()){
        pair<int,char> p;
        if(s[i]!='?'){
            p.F=i;
            p.S=s[i];
            vc.pb(p);
            break;
        }
    }
    forn(i,s.size()){
        if(i==0 && s[i]=='?'){
            if(vc.size()==0){
                v.pb('B');
                //cout<<"HERE"<<n<<endl;
            }
            else{
                if(vc[0].F%2==0){
                    if(vc[0].S=='R'){
                        v.pb('R');
                    }
                    else{
                        v.pb('B');
                    }
                }
                else{
                    if(vc[0].S=='R'){
                        v.pb('B');
                    }
                    else{
                        v.pb('R');
                        //cout<<"HERE "<<n<<endl;
                    }
                }
            }
        }
        else if(s[i]=='B'){
            v.pb('B');
        }
        else if(s[i]=='R'){
            v.pb('R');
        }
        else if(s[i]=='?'){
            if(v[i-1]=='R'){
                v.pb('B');
            }
            else{
                v.pb('R');
            }
        }
    }
    forn(i,v.size()){
        cout<<v[i];
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