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
    long long int i,n,x=0,y=0,a,b=0,c=0;
    int sam=0;
    cin>>n;
    vl v;
    forn(i,n){
        cin>>a;
        v.pb(a);
        if(a==0){
            // sam++;
            x++;
        }
    }
    c=v[0];
    forn(i,n){
        if(v[i]==0){
            continue;
        }
        while(i+1<n && v[i+1]!=0){
            i++;
        }
        sam++;
    }
    forn(i,n){
        if(v[i]==0 && c!=0){
            x=1;
        }
        if(x==1 && v[i]!=0){
            y=1;
            break;
        }
        if(c==0 && v[i]!=0){
            b=1;
        }
        if(b==1 && v[i]==0){
            y=1;
            break;
        }
    }
    cout<<min(2,sam)<<endl;
    return;
    if(sam==n){
        cout<<0<<endl;
        return;
    }
    if(sam==0){
        cout<<1<<endl;
        return;
    }
    if(v[0]==0 && sam==1){
        cout<<1<<endl;
        return;
    }
    if(v[v.size()-1]==0 && sam==1){
        cout<<1<<endl;
        return;
    }
    if(v[0]==0 && v[v.size()-1]==0 && sam==2){
        cout<<1<<endl;
        return;
    }
    if(y==0){
        cout<<1<<endl;
        return;
    }
    else{
        cout<<2<<endl;
        return;
    }
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