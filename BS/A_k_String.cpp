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

bool cz(vi v){
    forn(i,v.size()){
        if(v[i]!=0){
            return false;
        }
    }
    return true;
}


void solve(){
	int i,n,x,y,a,b,c,sam=0,temp=0,samkit=0;
    cin>>n;
    string s;
    cin>>s;
    vi v(27,0);
    vi vt(27,0);
    vector<char> vc;
    forn(i,s.size()){
        x=int(s[i])-96;
        v[x]++;
        //cout<<1;
    }
    forn(i,v.size()){
        if(v[i]!=0 && v[i]%n!=0){
            cout<<-1;
            return;
        }
        if(v[i]>sam){
            sam=v[i];
        }
        // else if(v[i]!=0 && v[i]%n==0){

        // }
    }
    //cout<<sam;
    // forn(u,v.size()){
    //     cout<<v[u]<<"-vu"<<endl;
    // }
    //cout<<sam<<" -sam"<<endl;
    vt=v;
    forn(i,v.size()){
        y=v[i]/n;
        forn(l,y){
            vc.pb(char(i+96));
        }
    }
    forn(o,n){
        forn(i,vc.size()){
            cout<<vc[i];
        }
    }
    // while(sam>0){
    //     // if(cz(v)){
    //     //     //cout<<1;
    //     //     break;
    //     // }
    //     //cout<<sam<<" -sam"<<endl;
    //     forn(j,v.size()){
    //         y=v[j]/n;
    //         // if(temp==0 && samkit==0){
    //         //     temp=y;
    //         //     samkit=1000;
    //         // }
    //         //cout<<y<<" -y"<<endl;
    //         forn(l,y){
    //             vc.pb(char(j+96));
    //             vt[j]--;
    //             //cout<<v[j]<<" -vj"<<endl;
    //         }
    //     }
    //     sam--;
    //     //cout<<1;
    // }
    // //cout<<1;
    // forn(i,vc.size()){
    //     cout<<vc[i];
    // }
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

//bool zeros = all_of(v.begin(), v.end(), [](int i) { return i==0; })