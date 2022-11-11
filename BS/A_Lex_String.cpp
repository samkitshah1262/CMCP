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
    long long int i,n,x,y,a,b,c=0,sam=0,m;
    cin>>n>>m>>x;
    vector<char> v1;
    vector<char> v2;
    string s,ss,ans="";
    cin>>s>>ss;
    forn(i,n){
        v1.pb(s[i]);
    }
    forn(i,m){
        v2.pb(ss[i]);
    }
    sort(all(v1));
    sort(all(v2));
    i=0;
    ll j=0;
    while(true){
        if(i==n || j==m){
            break;
        }
        if(int(v1[i])<int(v2[j])){
            if(sam==x){
                ans+=v2[j];
                j++;
                c=1;
                sam=0;
            }
            else{
                ans+=v1[i];
                sam++;
                i++;
                c=0;
            }
        }
        // else if(int(v1[i])<=int(v2[j]) && sam==x){
        //     ans+=v2[j];
        //     sam=1;
        //     // sam++;
        //     c=1;
        //     j++;
        // }
        else if(int(v1[i])>int(v2[j])){
            // if(c==1){
            //     sam--;
            // }
            if(c==x){
                sam=1;
                ans+=v1[i];
                i++;
                c=0;
            }
            else{
                ans+=v2[j];
                // sam++;
                j++;
                c++;
                sam=0;
            }
        }
        else{
            if(c==x){
                ans+=v1[i];
                i++;
                sam=1;
                c=0;
            }
            else if(sam==x){
                ans+=v2[j];
                j++;
                sam=0;
                c=1;
            }
            else{
                if(s.size()-i<ss.size()-j){
                    ans+=v1[i];
                    i++;
                    sam++;
                    c=0;
                }
                else{
                    ans+=v2[j];
                    j++;
                    c++;
                    sam=0;
                }
            }
        }
        // else if(int(v1[i])>=int(v2[j]) && c==x){
        //     ans+=v1[i];
        //     sam=1;
        //     i++;
        //     c=1;
        // }
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