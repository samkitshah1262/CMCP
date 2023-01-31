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
    long long int i,n,z,d,e,x,y,a,b,c,sam=0,sam2=0;
    cin>>a>>b>>c>>d>>e;
    x=a%3;
    y=b%3;
    z=c%3;
    vector<int> v;
    vector<int> ans;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
    sort(v.begin(),v.end());
    if(v[0]==0 && v[1]==0 && v[2]==0){
        ans.push_back(0);
        ans.push_back(min(d,e));
    }
    else if(v[0]==0 && v[1]==0 && v[2]==1){
        ans.push_back(2*d);
        ans.push_back(min(2*d,e));
    }
    else if(v[0]==0 && v[1]==0 && v[2]==2){
        ans.push_back(d);
        ans.push_back(min(2*d,e));
    }
    else if(v[0]==0 && v[1]==1 && v[2]==1){
        ans.push_back(min(4*d,2*e+d));
        ans.push_back(min(d,e));
    }
    else if(v[0]==0 && v[1]==1 && v[2]==2){
        ans.push_back(3*d);
        ans.push_back(d);
    }
    else if(v[0]==0 && v[1]==2 && v[2]==2){
        ans.push_back(2*d);
        ans.push_back(d);
    }
    else if(v[0]==1 && v[1]==1 && v[2]==1){
        ans.push_back(min(6*d,2*e));
    }
    else if(v[0]==1 && v[1]==1 && v[2]==2){
        ans.push_back(min(5*d,e+2*d));
    }
    else if(v[0]==1 && v[1]==2 && v[2]==2){
        ans.push_back(min(4*d,e+d));
    }
    else if(v[0]==2 && v[1]==2 && v[2]==2){
        ans.push_back(min(3*d,e));
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
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