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
    vi va;
    vi vb;
    cin>>n;
    forn(i,n){
        cin>>a;
        va.pb(a);
    }
    forn(i,n){      
        cin>>b;
        vb.pb(b);
    }   
    sort(all(va));
    sort(all(vb));
    forn(i,n){
        if(va[i]>vb[i]){
            sam=1;
            break;
        }
        else if(va[i]<vb[i]){
            sam=2;
            break;
        }
        else{
            continue;
        }
    }
    if(sam==1){
        // forn(i,n){
        //     if(va[i]-vb[i]==1 || va[i]-vb[i]==0){
        //         continue;
        //     }
        //     else{
        //         cout<<"NO"<<endl;
        //         return;
        //     }
        // }
        cout<<"NO"<<endl;
        return;
    }
    else if(sam==2){
        forn(i,n){
            if(vb[i]-va[i]==1 || vb[i]-va[i]==0){
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
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