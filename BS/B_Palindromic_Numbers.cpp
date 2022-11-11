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
    long long int i,n,x,y,a,b,c,sam=0;
    cin>>n;
    char ch;
    string s,t;
    cin>>s;
    t=s;
    forn(i,n){
        // cin>>ch;
        ch=s[i];
        if(i==0 && ch=='9'){
            sam=1;
        }
    }
    if(sam==1){
        string k;
        // forn(i,n+1){
        //     k+='1';
        // }
        ll flag=0;
        for(i=n-1;i>=0;--i){
            x=s[i]-'0';
            x+=flag;
            if(x>1){
                flag=1;
                y=11-x;
                k+=(y+'0');
            }
            else{
                flag=0;
                y=1-x;
                k+=(y+'0');
            }
        }
        // a=stoull(k);
        // b=stoull(s);
        reverse(all(k));
        cout<<k<<endl;
    }
    else{
        string k="";
        forn(i,n){
            k+=('0'+('9'-s[i]));
        }
        // a=stoull(k);
        // b=stoull(s);
        cout<<k<<endl;
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