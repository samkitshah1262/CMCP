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

int rep(vector<int> &pos,int j) {
    int cnt=0;
    int p=j;
    while(p!=-1) {
        ++cnt;
        p=pos[p];
        if(p==j) return cnt;
    }
    return -1;
}

bool check(vector<int> v,int i){
    if(v[i]==-1) return true;
}

void solve() {
    int n; 
    cin>>n;
    string s; 
    cin>>s;
    vector<int> pos(26,-1);
    vi ref(26,1);
    for(int i=0; i<n; i++) {
        if(check(pos,s[i]-'a')){
            for(int j=0; j<26; j++) {
                if(ref[j]!=0 and j!=s[i]-'a') {
                    pos[s[i]-'a']=j;
                    int z=rep(pos,j);
                    if(z!=-1 and z!=26)
                    continue;
                    else {
                        ref[j]=0;
                        break;
                    }
                }
            }
        }
        cout<<char(pos[s[i]-'a']+'a');
    }
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
    return 0;
}

