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
	long long int i,n,x,z,y,a,b,c,sam=0;
    vector<pair<ll,ll>> v;
    cin>>n;
    forn(i,n){
        cin>>z>>a>>b;
        if(z==1){
            pair<ll,ll> p;
            p.F=a;
            p.S=b;
            v.pb(p);
        }
        else{
            x=a-1;
            y=b-1;
            ll mm,mx;
            mm=v[x].F;
            mx=v[x].S;
            vector<pair<ll,ll>> vcopy;
            vcopy=v;
            sort(all(vcopy));
            forn(j,v.size()){
                if(vcopy[j].F<mm && mm<vcopy[j].S){
                    mm=vcopy[j].F;
                    mx=max(mx,vcopy[j].S);
                }
                else if(vcopy[j].F<mx && mx<vcopy[j].S){
                    mm=min(mm,vcopy[j].F);
                    mx=vcopy[j].S;
                }
            }
            if(mm<v[y].F && v[y].F<mx){
                cout<<"YES"<<endl;
            }
            else if(mm<v[y].S && v[y].S<mx){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            //sort(all(v));

        }
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