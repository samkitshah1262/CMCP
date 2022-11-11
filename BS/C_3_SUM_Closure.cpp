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
    long long int i,n,x=0,y=0,a,b,c,sam=0;
    cin>>n;
    vl v;
    map<ll,bool> m;
    forn(i,n){
        cin>>a;
        if(a==0){
            sam++;
            if(sam<=3){
                v.pb(0);
            }
        }
        else if(a>0){
            x++;
            v.pb(a);
        }
        else{
            y++;
            v.pb(a);
        }
        m[a]=true;
    }
    sort(all(v));
    if(v.size()<3){
        cout<<"YES"<<endl;
        return;
    }
    if(sam==n-2){
        if(v[0]+v[v.size()-1]==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    if(sam==n){
        cout<<"YES"<<endl;
        return;
    }
    if(v.size()==3){
        c=v[0]+v[1]+v[2];
        if(m[c]){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    if(x>=3 || y>=3){
        cout<<"NO"<<endl;
        return;
    }

    forn(i,v.size()){
        fora(j,i+1,v.size()){
            fora(k,j+1,v.size()){
                if(i!=j && j!=k && k!=i){
                    c=v[i]+v[j]+v[k];
                    if(!m[c]){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<"YES"<<endl;
    // sort(all(v));
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