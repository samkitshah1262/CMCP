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
	int i,n,x,y,a,b=-1,c=-1,sam=0;
    string s;
    cin>>s;
    vector<char> vc;
    int flag=int(s[s.size()-1]);
    x=flag;

    forn(i,s.size()){
        vc.pb(s[i]);
        if(int(s[i])>=flag && (int(s[i])-48)%2==0){
            flag=int(s[i]);
            c=i;
        }
        else if(int(s[i])<flag && (int(s[i])-48)%2==0 && b==-1){
            b=i;
        }
        else{
            sam++;
        }
    }
    if(sam==s.size()){
        cout<<-1;
        return;
    }
    if(c!=-1){
        swap(vc[c],vc[s.size()-1]);
    }
    else if(b!=-1 && c==-1){
        swap(vc[b],vc[s.size()-1]);
    }
    forn(i,s.size()){
        cout<<vc[i];
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// ll tt;
	// cin>>tt;
	// while(tt--){
	// 	solve();
	// }

    solve();


	return 0;
}