#include <bits/stdc++.h>

using namespace std;

using ll = 
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

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second > b.second);
}

bool sortbysecdesc(const pair<int,int> &a, 
                   const pair<int,int> &b) 
{ 
       return a.second>b.second; 
} 

void solve(){
	int i,n,x,y,a,b,c=0,sam=1;
    cin>>n;
    deque<pair<int,int>> v;
    forn(i,n){
        pair<int,int> p;
        cin>>a>>b;
        p.F=a;
        p.S=b;
        v.pb(p);
    }
    //deque<pair<int,int>> v2;
    sort(all(v),greater<int>());
    //v2=v;
    sort(all(v),sortbysec);
    while(true){
        if(v.size()==0){
            break;
        }
        if(v[0].S==0){
            break;
        }
        else{
            sam=sam+v[0].S;
            c=c+v[0].F;
            //v[i].F=0;
            v.pop_front();
        }
    }
    if(v.size()==0){
        cout<<c;
        return;
    }
    sort(all(v),greater<int>());
    while(sam!=0){
        if(v.size()==0){
            break;
        }
        c=c+v[0].F;
        v.pop_front();
    }
    cout<<c;
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