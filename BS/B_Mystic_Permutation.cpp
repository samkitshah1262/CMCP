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
    // vector<bool> vb(n,false);
    // vi in;
    vl v;
    forn(i,n){
        cin>>a;
        // a--;
        v.pb(a);
        // in[a]=i;
    }
    vl t=v;
    sort(all(t));
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    deque<int> ans;
    forn(i,n){
        if(t[i]==v[i]){
            ans.pb(i);
        }
    }
    while(true){
        if(ans.size()==0){
            break;
        }
        // cout<<ans[i]<<" ";
        if(ans[0]==0){
            swap(t[0],t[1]);
        }
        else if(ans[0]==n-1){
            swap(t[ans[0]],t[ans[0]-1]);
        }
        else{
            swap(t[ans[0]],t[ans[0]+1]);
        }
        if(ans.size()>=2 && ans[0]+1==ans[1]){
            ans.pop_front();
            ans.pop_front();
        }
        else if(ans.size()>=2 && ans[0]+1!=ans[1]){
            ans.pop_front();
        }
        else{
            ans.pop_front();
        }
    }
    // cout<<endl;
    forn(i,t.size()){
        cout<<t[i]<<" ";
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