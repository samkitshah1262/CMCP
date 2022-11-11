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
    string s,st;
    cin>>n;
    set<string> ss;
    vector<string> v;
    forn(i,n){
        cin>>s;
        v.pb(s);
    }
    forn(i,n){
        if(i==0){
            ss.insert(v[i]);
        }
        else{
            if(v[i].size()==1){
                cout<<"YES"<<endl;
                return;
            }
            if(v[i].size()==2){
                ss.insert(v[i]);
                x=ss.size();
                st=v[i];
                reverse(st.begin(),st.end());
                ss.insert(st);
                if(x==ss.size()){
                    cout<<"YES"<<endl;
                    return;
                }
                string sta;
                string stb;
                string stc;
                sta=st+'a';
                stb=st+'b';
                stc=st+'c';
                set<string>::iterator it = ss.find(sta);
                if (it != ss.end()){
                    cout<<"YES"<<endl;
                    return;
                }
                set<string>::iterator ita = ss.find(stb);
                if (ita != ss.end()){
                    cout<<"YES"<<endl;
                    return;
                }
                set<string>::iterator its = ss.find(stc);
                if (its != ss.end()){
                    cout<<"YES"<<endl;
                    return;
                }
            }
            else{
                
            }
        }
    }
    cout<<"NO"<<endl;
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