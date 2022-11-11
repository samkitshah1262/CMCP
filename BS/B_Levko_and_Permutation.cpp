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
    cin>>x>>y;
    if(y>x-1){
        cout<<-1;
        return;
    }
    else if(y==x-1){
        forn(i,x){
            cout<<i+1<<" ";
            
        }
        return;
    }
    deque<int> v;
    for(i=1;i<=x-y;i++){
        v.pb(i);
    }
    // if(x%2==0){
    //     for(i=y+1;i+1<x;i=i+2){
    //         swap(v[i],v[i+1]);
    //     }
    //     v.pop_front();
    //     v.push_front(v[v.size()-1]);
    //     v.pop_back();
    //     v.pb(1);
    //     forn(i,v.size()){
    //         cout<<v[i]<<" ";
    //     }
    // }
    // else{
    //     for(i=y+1;i+1<x;i=i+2){
    //         swap(v[i],v[i+1]);
    //     }
    //     forn(i,v.size()){
    //         cout<<v[i]<<" ";
    //     }
    // }
    for(i=0;i<x-y;i++){
        if(i==0){
            cout<<v[v.size()-1]<<" ";
            v.pop_back();
            //v.pb(v[0]);
            //v.pop_front();
        }
        else{
            cout<<v[i-1]<<" ";
        }
    }
    for(i=x-y+1;i<=x;i++){
        cout<<i<<" ";
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