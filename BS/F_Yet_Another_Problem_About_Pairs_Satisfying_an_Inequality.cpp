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
    long long int i,n,x,y,a,b=0,c,sam=0;
    cin>>n;
    vi v;
    map<int,vi> m;
    map<int,int> m1;
    set<int> s;
    vl v2;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    forn(i,n){
        // m[i+1]=v[i];
        if(v[i]<i+1){
            s.insert(v[i]);
            m[v[i]].pb(i+1);
        }
    }
    for(auto it=s.begin();it!=s.end();it++){
        v2.pb(*it);
    }
    // cout<<v2.size();
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second.size()!=-1){
            m1[it->F]=(it->S).size();
        }
    }
    for(i=v2.size()-2;i>=0;i--){
        m1[v2[i]]+=m1[v2[i+1]];
    }
    // m.erase(n);
    // m.erase(prev(m.end()));
    // for(auto it:m){
    //     cout<<it.F<<" "<<it.S<<endl;
    // }

    b=1;
    for(auto it=m.begin();it!=m.end();it++){
        if(b==0){
            b=1;
        }
        else{
            vi t=it->S;
            // cout<<x<<" "<<y<<endl;
            for(int j=0;j<t.size();j++){
                if(s.lower_bound(t[j])!=s.end()){
                    y=*s.lower_bound(t[j]);
                    auto titty=s.lower_bound(t[j]);
                    // cout<<x<<" "<<y<<endl;
                    if(y==t[j]){
                        // s.lower_bound(t[j])++;
                        titty++;
                    }
                    if(sam==0){
                        b++;
                    }
                    if(titty!=s.end()){
                        sam+=m1[*titty];
                    }
                    // break;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<sam<<endl;
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