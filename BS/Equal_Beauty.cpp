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
	long long int i,n,x=0,y=0,a,b,k,j,m,c,sam=0;
    cin>>n;
    vl v;
    forn(i,n){
        cin>>a;;
        v.pb(a);
    }
    sort(all(v));
    //n/2 -1;

    ll l=1;
    ll u=n-2;

    b=v[(n-1)/2];
    c=v[(n-1)/2 +1 ];

    if(n==2){
        cout<<0<<endl;
        return;
    }
    else if(n==3){
        ll mint=min(v[0],v[1]);
        cout<<min(v[1]-v[0],v[2]-v[1])<<endl;
        return;
    }
    else{
        forn(i,n-1){
            x+=abs(v[i]-b);
        }
        fora(i,1,n){
            y+=abs(v[i]-c);
        }
        c=min(x,y);
        while(l<u){
            j=v[u]-v[0];
            k=v[n-1]-v[l];
            m=min(m,abs(j-k));
            if(j<k){
                l++;
            }
            else{
                u--;
            }
        }
        cout<<m<<endl;
        return;
    }
    // if(b==c){
    //     cout<<0<<endl;
    //     return;
    // }
    // if(b>c){
    //     while(b!=c){
    //         c++;
    //         sam++;
    //     }
    // }
    // else{
    //     while(b!=c){
    //         b++;
    //         sam++;
    //     }
    // }
    // cout<<sam<<endl;
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