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
	long long int i,n,x,y,a,b,c,sam=0,flag=0;
    cin>>n;
    vi v;
    vi vt;
    vi vtemp;
    //int arr[n];
    forn(i,n){
        cin>>a;
        v.pb(a);
        vt.pb(a);
        //arr[i]=a;
    }
    sort(all(vt));
    x=v[v.size()-1];
    y=vt[vt.size()-1];
    if(y==x){
        cout<<0<<endl;
        return;
    }
    // while(y!=x){
        for(i=v.size()-1;i>=0;i--){
            if(v[i]==y){
                sam++;
                break;
            }
            if(v[i]>x){
                sam++;
                x=v[i];
            }
        }
    //     if(flag==0){
    //     forn(i,vt.size()){
    //         if(v[i]>x){
    //             vtemp.pb(v[i]);
    //         }
    //     }
    //     x=vtemp[vtemp.size()-1];
    //     sam++;
    //     vtemp.clear();
    // }
    // else{
    //     vi vtemp2;
    //     forn(i,vtemp.size()){
    //         if(vtemp[i]>x){
    //             vtemp2.pb(v[i]);
    //         }
    //     }
    //     x=vtemp2[vtemp2.size()-1];
    //     sam++;
    //     vtemp=vtemp2;
    //     vtemp.clear();
    // }
    //}

    cout<<sam<<endl;
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