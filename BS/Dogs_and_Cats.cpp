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


void solve(int tt){
	int i,n,x,y,a,b,c,d,m,sam=0,cd=0,cc=0;
    string s;
    cin>>n>>d>>c>>m;
    cin>>s;

    for(i=0;i<n;i++){
        if(d<0){
            //sam=1;
             x=123;
                break;
        }
        if(c<0){
            //sam=1;
             x=123;
                break;
        }
        if(s[i]=='D'){
            // if(sam==1){
            //     x=123;
            //     break;
            // }
            d--;
            c=c+m;
            cd++;
        }
        if(s[i]=='C'){
            c--;

            //cc++;
        }
    }
    if(cd==0){
        cout<<"Case #"<<tt+1<<": YES"<<endl;
        return;
    }
    if(x==123){
        cout<<"Case #"<<tt+1<<": NO"<<endl;
    }
    else{
        cout<<"Case #"<<tt+1<<": YES"<<endl;
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	cin>>tt;
	for(int i=0;i<tt;i++){
		solve(i);
	}



	return 0;
}