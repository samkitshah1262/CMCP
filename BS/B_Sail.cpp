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
	int i,n=0,e=0,w=0,s=0,x,y,a,b,c,sam=0;
    cin>>c;
    cin>>x>>y>>a>>b;
    char ch;
    if(a-x<0){
        w=w+x-a;
    }
    else{
        e=e+a-x;
    }
    if(b-y<0){
        s=s+y-b;
    }
    else{
        n=n+b-y;
    }
    forn(i,c){
        cin>>ch;
        if(n==0 && s==0 && e==0 && w==0){
            break;
        }
        if(ch=='N'){
            if(n!=0){
                n--;
            }
        }
        else if(ch=='E'){
            if(e!=0){
                e--;
            }
        }
        else if(ch=='W'){
            if(w!=0){
                w--;
            }
        }
        else if(ch=='S'){
            if(s!=0){
                s--;
            }
        }
        sam++;
    }
    if(n!=0 || s!=0 || e!=0 || w!=0){
        cout<<-1;
        return;
    }
    cout<<sam;
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