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

bool subs(string s1,string s2){
    int x=s1.size();
    int y=s2.size();
    int j=0;
    for(int i=0;i<x && j<y;i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
    return(j==y);
}

void solve(){
	int i,n,x,y,a,b,c,sam=0;
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()==s2.length()){
        vi v1;
        vi v2;
        forn(i,s1.size()){
            v1.pb(int(s1[i]));
            v2.pb(int(s2[i]));
        }
        sort(all(v1));
        sort(all(v2));
        forn(i,s1.size()){
            if(v1[i]!=v2[i]){
                cout<<"need tree";
                return;
            }
        }
        cout<<"array";
        return;
    }
    else{
        // size_t found = s1.find(s2);
        // if (found != string::npos){
        //     cout<<"automaton";
        //     return;
        // }
        if(subs(s1,s2)){
            cout<<"automaton";
            return;
        }
        else{
            sam=1;
        }
        vi v1(28,0);
        vi v2(28,0);
        forn(i,s1.size()){
            v1[int(s1[i])-96]++;
            //v2.pb(int(s2[i]));
        }
        forn(i,s2.size()){
            //v1.pb(int(s1[i]));
            v2[int(s2[i])-96]++;
        }
        // sort(all(v1));
        // sort(all(v2));
        forn(i,v2.size()){
            if(v2[i]>v1[i]){
                cout<<"need tree";
                return;
            }
        }
        cout<<"both";
        return;

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