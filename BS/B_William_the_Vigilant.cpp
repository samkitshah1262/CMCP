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
	int i,n,x,y,a,b,c=0,sam=0,flag=0;
    cin>>x>>y;
    char ch;
    vi v1;
    vi v2;
    vector<char> vc;
    forn(i,x){
        cin>>ch;
        vc.pb(ch);
    }
    forn(i,x-2){
        if(vc[i]=='a' && vc[i+1]=='b' && vc[i+2]=='c'){
            v1.pb(i);
            sam++;
        }
        // else if(vc[i]=='a' && vc[i+1]=='b' && vc[i+2]!='c'){
        //     v2.pb(i);
        // }
    }
    forn(i,y){
        cin>>n>>ch;
        forn(j,v1.size()){
            if(v1[j]==n-1 || v1[j+1]==n-1 || v1[j+2]==n-1){
                //sam--;
                flag=1;
                break;
            }
        }
        vc[n-1]=ch;
        fora(k,n-3,max(n-1,x)){
            if(vc[k]=='a' && vc[k+1]=='b' && vc[k+2]=='c'){
                c++;
            }
        }
        if(flag==1){
            c--;
        }
        cout<<sam+c<<endl;
    //     if(vc[n]=='a' && vc[i+1]=='b' && vc[i+2]=='c'){
    //         flag=1;
    //     }
        
    //     if(vc[n]=='a' && vc[n+1]=='b' && vc[n+2]=='c'){
    //         forn(j,v1.size()){
    //             if(v1[j]==n-1 || v1[j+1]==n-1 || v1[j+2]==n-1){
    //                 sam--;
    //                 break;
    //             }
    //             sam++;
    //         }
    //     }
    //     cout<<sam<<endl;
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