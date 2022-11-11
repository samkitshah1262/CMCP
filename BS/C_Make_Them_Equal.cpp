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
	int i,n,x,y,a,b,c,sam=0,ce=0,co=0;
    cin>>n;
    char k,l;
    cin>>k;
    //cout<<k<<endl;
    string s;
    cin>>s;
    vi v;

    forn(i,n){
        //cin>>l;
        //cout<<l<<" -l  ";
        l=s[i];
        if(l!=k){
            v.pb(i+1);
            if(v.size()==1){
                continue;
            }
            else{
                if(v[v.size()-1]-v[v.size()-2]==1){
                    
                    cout<<2<<endl<<2<<" "<<3<<endl;
                    return;
                    //break;
                }
            }
        }
    }
    if(v.size()==0){
        cout<<0<<endl;
        return;
    }
    if(v.size()==1){
        cout<<1<<endl;
        if(v[0]%2==0){
            cout<<3<<endl;
            return;
        }
        else{
            cout<<2<<endl;
            return;
        }
    }
    y=v.size();
    forn(i,y){
        if(ce!=0 && co!=0){
            cout<<2<<endl<<2<<" "<<3<<endl;
            return;
        }
        if(v[i]%2==0){
            ce++;
        }
        else{
            co++;
        }
    }
    if(ce!=0 && co==0){
        cout<<1<<endl<<3<<endl;
        return;
    }
    else if(ce==0 && co!=0){
        cout<<1<<endl<<2<<endl;
        return;
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