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

int db(int n,int cnt=0)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--){
        if(binaryNum[j]==1){
            cnt++;
        }
    }
    return cnt;
        //cout << binaryNum[j];

}


void solve(){
	long long int i,n,x,y,a,b,c,sam=1,ans=1;
    cin>>n;
    //vector<pi> v;
    vi vc;
    vector<vi> vf;
    forn(i,n){
        cin>>a;
        //pi p;
        //x=db(a);
        //p.F=x;
        //p.S=i;
        //v.pb(p);
        vc.pb(a);
        vi vt;
        vt.pb(a);
        vt.pb(i);
        vf.pb(vt);
    }
        forn(i,n-1){
        if(vc[i+1]>=vc[i]){
            sam++;
        }
        else{
            break;
        }
    }
    if(sam==n){
        cout<<"YES"<<endl;
        return;
    }
    sort(all(vf));
    forn(j,n){
        vf[j].pb(j);
    }
    forn(i,n){
        x=db(vc[vf[i][2]]);
        y=db(vc[vf[i][1]]);
        if(x==y){
            ans++;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	cin>>tt;
	while(tt--){
		solve();
        //cout<<tt<<endl;
	}



	return 0;
}