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

int add(int a, int b) {
    return (a+b)%M;
}

int mul(int a, int b) {
    return (a*b)%M;
}

int sub(int a, int b) {
    return (a-b+M)%M;
}

bool comp(int x,int y){
    if(x>y){
        return true;
    }
    return false;
}

void solve(){
    long long int i,n,x=0,y=0,a,b=0,c=0,sam=0;
    cin>>n;
    vi v;
    forn(i,n){
        cin>>a;
        x++;
        v.pb(a);
        y++;
    }
    c++;
    a=1;
    a--;
    b=1;
    b--;
    c=2;
    c--;
    // cout<<c<<endl;
    bool f1=false,f2=false;
    while(b<n){
        // f1=;
        // f2=;
        x++;
        while(comp(n,a) && comp(c,v[b])){
            c=sub(c,1);
            x--;
            a=add(a,1);
            y--;
        }
        x--;
        // sam=add(add(sam,1),sub(b,a));
        sam+=b-a+1;
        x++;
        c=add(c,1);
        y--;
        b=add(b,1);
        y++;
    }
    if(!f1 && !f2){
        // sam=add(sam,1);
        x=x+y;
        cout<<sam<<endl;
        return;
    }
    else{   
        // sam=add(sam,1);
        cout<<sam<<endl;
        return;
    }
    // cout<<sam<<endl;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll tt;
    cin>>tt;
    while(tt--){
        // cout<<"Case #"<<tt+1<<": ";
        solve();
    }

//solve();

    return 0;
}
