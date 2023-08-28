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
    long long int m,i,n,x=INT_MIN,y,a,b,c,sam=0;
    cin>>m;
    // vi vis(50001,0);
    vi ans;
    // vvi mat(50001,vi(50001,0));
    vi nn;
    // int mat[m][50001]={0};
    vvi mat(m);
    forn(j,m){
        cin>>n;
        vi v;
        nn.pb(n);
        forn(i,n){
            cin>>a;
            // mat[j][i]=a;
            v.pb(a);
            x=max(x,a);
        }
        mat[j]=v;
    }
    vi vis(x+1,0);
    for(int j=m-1;j>=0;j--){
        n=nn[j];
        forn(i,n){
            if(vis[mat[j][i]]==0){
                vis[mat[j][i]]=j;
            }
            else{
                vis[mat[j][i]]=j+m;
            }
        }   
        int flag=0;
        // cout<<1;
        forn(i,n){
            if(vis[mat[j][i]]==j){
                ans.pb(mat[j][i]);
                flag=1;
                break;
            }
        }
        if(flag==0){
            // cout<<ans.size()<<endl;
            // forn(i,ans.size()){
            //     cout<<ans[i]<<" ";
            // }
            // cout<<endl;
            // cout<<mat[j][8]<<endl;
            cout<<-1<<endl;
            return;
        }
    }
    for(i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
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

//solve();

    return 0;
}