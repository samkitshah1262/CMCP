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
	long long int j,i,n,x,y,b,c,sam=0,cnt=0;
    deque<long long int> v;
    string a,s;
    cin>>a>>s;
    i=s.size()-1;
    j=a.size()-1;
    while(true){
        if(cnt>1){
            cout<<-1<<endl;
            return;
        }
        if(i<0){
            break;
        }
        if(j<0){
            while(i>=0){
                v.pb(int(s[i])-48);
                i--;
            }
            break;
        }
        x=int(s[i])+sam;
        //cout<<x<<" x"<<endl;
        y=int(a[j]);
        //cout<<y<<" y"<<endl;
        if(x-y<0){
            sam=sam+x-int(s[i-1])+(int(s[i-1])-48)*10;
            i--;
            cnt++;
        }
        else{
            if(x-y>9 || x-y<0){
                cout<<-1<<endl;
                return;
            }
            v.pb(x-y);
            i--;
            j--;
            sam=0;
            cnt=0;
        }
    }
    // if(j>s.size()-a.size()){
    //     cout<<-1<<endl;
    // }
    // else{
    if(j>=0){
        cout<<-1<<endl;
        return;
    }
    while(true){
        if(v[v.size()-1]!=0){
            break;
        }
        if(v[v.size()-1]==0){
            v.pop_back();
        }
    }
    
        for(c=v.size()-1;c>=0;c--){
            cout<<v[c];
        }
        cout<<endl;
    //}
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