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
    long long int i,n,x,y,a=0,b=0,c=0,sam=0,ans=0;
    cin>>n>>x>>y;
    string s1,s2;
    cin>>s1>>s2;
    vi v;
    for(i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            v.pb(i);
        }
    }

    if(x>2*y){
        sam=1;
    }
    if(v.size()%2){
        cout<<"-1"<<endl;
        return;
    }
    int j=v.size()/2;
    a=j;
    i=0;
    while(j<v.size() && i<a){
        if(v[j]!=v[i]+1){
            ans+=y;
        }
        else if(v[j]==v[i]+1 && sam){
            ans+=2*y;
        }
        else if(v[j]==v[i]+1 && !sam){
            ans+=x;
        }
        i++;
        j++;
    }
    cout<<ans<<endl;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll tt;
    cin>>tt;
    while(tt--){
        solve();
    }

//solve();

    return 0;
}