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
    long long int i,n,x,y=0,a,b,c,sam=0;
    map<ll,deque<int>> m;
    // cin>>n;
    string s;
    cin>>s;
    cin>>x;
    n=s.size();
    deque<int> v;
    forn(i,n){
        v.pb(s[i]-'a'+1);
        m[s[i]-'a'+1].pb(i);
        y+=s[i]-'a'+1;
    }
    // cout<<v.back()<<" v"<<endl;
    sort(all(v));
    // y=x;
    // cout<<y<<endl;
    while(y>x){
        if(v.size()==0){
            break;
        }
        y=y-v.back();
        m[v.back()].pop_back();
        v.pop_back();
    }
    // cout<<m[1].size()<<endl;
    if(v.size()==0){
        cout<<""<<endl;
        return;
    }
    // cout<<1<<endl;
    forn(i,n){
        if(m[s[i]-'a'+1].size()==0){
            sam++;
        }
        else{
            cout<<s[i];
            m[s[i]-'a'+1].pop_front();
            // if(m[s[i]].size()!=0){
            //     sam++;
            // }
            // cout<<m[1].size();
        }
    }
    // cout<<sam<<endl;
    cout<<endl;
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