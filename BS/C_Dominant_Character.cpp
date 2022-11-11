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
	int i,n,x,y,a=0,b=0,c=0,sam=0;
    cin>>n;
    string s;
    cin>>s;
    // forn(i,n){
    //     if(s[i]=='a'){
    //         a++;
    //     }
    //     else if(s[i]=='b'){
    //         b++;
    //     }
    //     else{
    //         c++;
    //     }
    // }
    forn(i,n){
        if(a==2){
            cout<<2<<endl;
            return;
        }
        if(s[i]=='a'){
            a++;
        }
        else{
            a=0;
        }
    }
    if(a==2){
            cout<<2<<endl;
            return;
        }
    for(i=0;i<n-2;i++){
        if(s[i]=='a'){
            if(s[i+2]=='a'){
                cout<<3<<endl;
                return;
            }
        }
    }
    for(i=0;i<n-3;i++){
        if(s[i]=='a'){
            if(s[i+1]=='b'){
                if(s[i+2]=='c'){
                    if(s[i+3]=='a'){
                        cout<<4<<endl;
                        return;
                    }
                }
            }
            else{
                if(s[i+2]=='b'){
                   if(s[i+3]=='a'){
                        cout<<4<<endl;
                        return;
                    } 
                }
            }
        }
    }
    string s1,s2;
    s1="abbacca";
    s2="accabba";
    if (s.find(s2) != string::npos || s.find(s1) != string::npos) {
        cout<<7<<endl;
        return;
    } 
    cout<<-1<<endl;
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