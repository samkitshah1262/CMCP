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

int pow2(int x){
    int c=0;
    while(true){
        if(x%2!=0){
            break;
        }
        x/=2;
        c++;
    }
    return c;
}

void solve(){
    long long int i,n,x=0,y=0,a,b,c,sam=0;
    cin>>n;
    vector<pl> v;
    forn(i,n){
        cin>>a;
        pl p;
        p.F=pow2(a);
        p.S=a;
        v.pb(p);
        if(a%2==0){
            y++;
        }
        else{
            x++;
        }
    }
    if(y==0){
        cout<<0<<endl;
        return;
    }
    else if(x==0){
        sort(all(v));
        sam+=v[0].F+n-1;
        cout<<sam<<endl;
        return;
    }
    else{
        cout<<y<<endl;
        return;
    }
    // cout<<pow2(n)<<endl;
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