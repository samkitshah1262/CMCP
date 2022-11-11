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
    cin>>n;
    string s;
    //vector<char> vc1;
    vector<char> vc2;
    char ch,ct;
    vector<string> vs;
    cin>>s;
    string stemp="";
    forn(i,n){
        //cin>>ch;
        ch=s[i];
        //vc1.pb(ch);
        // stemp=stemp+ch;
        // //cout<<stemp<<endl;
        // string s2;
        // s2=stemp;
        // for(int j=s2.size()-1;j>=0;j--){
        //     s2=s2+s2[j];
        //}
        //cout<<s2<<endl;
        //vs.pb(s2);
        if(i==0){
            ct=ch;
            vc2.pb(ch);
        }
        else{
            if(int(ct)<int(ch)){
                //vc2.pb(ch);
                break;
            }
            // else if(int(ct)==int(ch)){
            //     //continue;
            // }
            else{
                ct=ch;
                vc2.pb(ch); 
            }
        // }
    }
    }
    forn(i,vc2.size()){
            cout<<vc2[i];
        }
    for(i=vc2.size()-1;i>=0;i--){
            cout<<vc2[i];
        }
    // sort(all(vs));
    // cout<<vs[0];
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