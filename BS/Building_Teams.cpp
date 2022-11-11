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
    long long int i,n,x,y,a,b,c,sam=1;
    cin>>n>>x;
    vvi v(n);
    forn(i,x){
        cin>>a>>b;
        a--;b--;
        v[a].pb(b);
        v[b].pb(a);
    }
    vi ans(n,-1);
    vector<bool> vis(n,false);
    forn(j,n){
        // cout<<j<<endl;
        if(!vis[j]){
            queue<int> q;
            q.push(j);
            ans[j]=1;
            while(!q.empty()){
                int cur = q.front();
                vis[cur]=true;
                int col=ans[cur];
                q.pop();
                // cout<<v[cur].size();
                for(i=0;i<v[cur].size();i++){
                    if(ans[v[cur][i]]==col){
                        cout<<"IMPOSSIBLE "<<i<<" "<<j;
                        return;
                    }
                    else if(ans[v[cur][i]]==-1){
                        q.push(v[cur][i]);
                        if(ans[cur]==1){
                            ans[v[cur][i]]=2;
                        }
                        else{
                            ans[v[cur][i]]=1;
                        }
                    }
                }
            }
        }
    }

    print(ans);
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // ll tt;
    // cin>>tt;
    // while(tt--){
    //     solve();
    // }

    solve();
    

    return 0;
}