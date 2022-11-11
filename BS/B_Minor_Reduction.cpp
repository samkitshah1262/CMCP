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
    cin>>s;
    vector<char> vc;
    forn(i,s.size()-1){
        if(s[i]+s[i+1]-48-48>=10){
            //cout<<2;
            sam=1;
            // vc.pb('1');
            // c=s[i]+s[i+1]-48-10;
            // vc.pb(char(c));
        }
        // else{
        //     vc.pb(s[i]);
        // }
    }
    //cout<<sam<<"sam"<<endl;
    if(sam==1){
        //cout<<1<<endl;
        for(i=s.size()-1;i>=1;i--){
            //cout<<1;
            if(s[i]+s[i-1]-48-48>=10){
                //cout<<"sam";
                vc.pb('1');
                c=s[i]+s[i-1]-48-10;
                //cout<<char(c)<<"C"<<endl;
                vc.pb(char(c));b=i-1;
                c=b;
                //cout<<b<<"B"<<endl;
                break;
            }
        }
        for(i=0;i<s.size();i++){
            if(i==b){
                cout<<vc[0];
            }
            else if(i==c+1){
                cout<<vc[1];
            }
            else{
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    else{
        vc.pb(char(s[0]+s[1]-48));
        cout<<vc[0];
        for(i=2;i<s.size();i++){
            cout<<s[i];
        }
        cout<<endl;
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