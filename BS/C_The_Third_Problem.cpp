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

int factorial(int n)
{
    // single line to find factorial
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void solve(){
    long long int i,n,x=0,y=0,a,b,c,sam=0;
    cin>>n;
    vi v;
    forn(i,n){
        cin>>a;
        v.pb(a);
        if(a==0){
            b=i;
        }
    }
    int no=0;
    forn(i,n-1){
        if(v[i]!=v[i+1]-1){
            no=1;
        }
    }
    if(!no){
        cout<<1<<endl;
        return;
    }
    c=n-1-b-1;
    // cout<<b<<" b "<<c<<" c"<<endl;
    fora(i,1,b){
        if(v[i]>v[0] && v[i]>v[v.size()-1]){
            sam++;
        }
        else{
            x++;
        }
    }
    fora(i,b+1,n-1){
        if(v[i]>v[0] && v[i]>v[v.size()-1]){
            sam++;
        }
        else{
            y++;
        }
    }
    // cout<<x<<" x "<<y<<" y"<<endl;
    // cout<<sam<<" sam"<<endl;
    int ans=1;
    // cout<<sam;
    int lol=1;
    int lol2=1;
    int lol3=1;
    int lol4=1;
    if(sam>=b-1-x && sam>=0 && b-1-x>=0)
        lol=nCr(sam,b-1-x);
    if(sam-b+1+x>=0 && sam-b+1+x>=c-y && c-y>=0)
        lol2=nCr(sam-b+1+x,c-y);
    if(b-1>=0)
        lol3=factorial(b-1);
    if(c>=0)
        lol4=factorial(c);
    ans=lol*lol2*lol3*lol4;
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