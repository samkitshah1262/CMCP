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


void solve(int sam){
	int i,n,x,y,a=0,b=0,c=0,d=0;
    string s;
    cin>>n>>s;
    sam++;
    forn(i,n){
        if(int(s[i])>=97 && int(s[i])<=122){
            a++;
        }
        else if(int(s[i])>=65 && int(s[i])<=90){
            b++;
        }
        else if(int(s[i])==35 || int(s[i])==64 || int(s[i])==42 || int(s[i])==38){
            c++;
        }
        else if(int(s[i])>=48 && int(s[i])<=57){
            d++;
        }
    }
    if(n>=7 && a>0 && b>0 && c>0 && d>0){
        cout<<"Case #"<<sam<<": "<<s<<endl;
        return;
    }
    else{
        if(a==0){
            s=s+'a';
            a++;
        }
        if(b==0){
            s=s+'A';
            b++;
        }
        if(c==0){
            s=s+'*';
            c++;
        }
        if(d==0){
            s=s+'1';
        }
        if(s.size()<7){
            while(s.size()!=7){
                s=s+'a';
            }
        }
        cout<<"Case #"<<sam<<": "<<s<<endl;
        return;
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	cin>>tt;
	forn(sam,tt){
		solve(sam);
	}

	return 0;
}