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


bool comp1(const pair<string,pair<long long int,long long int>> &a,const pair<string,pair<long long int,long long int>> &b){
    if(a.F.size()==b.F.size()){
        if(a.F==b.F){
            return a.S.S<b.S.S;
        }
        else{
            return a.F<b.F;
        }
    }
    // return a.F.size()<b.F.size();
    else{
        // lexicographically smaller
        return a.F<b.F;
    }
}

bool comp2(const pair<string,pair<long long int,long long int>> &a,const pair<string,pair<long long int,long long int>> &b){
    if(a.S.F==b.S.F) return a.S.S<b.S.S;
    return a.S.F<b.S.F;
}

void solve(ll t){
    long long int i,n,x,y,a,b,c,sam=0;
    string s;
    cin>>n;
    vector<pair<string,pair<long long int,long long int>>> v1;
    vector<pair<string,pair<long long int,long long int>>> v2;
    for(i=0;i<n;i++){
        cin>>s>>a>>b;
        v1.push_back({s,{a,b}});
        v2.push_back({s,{a,b}});
    }
    sort(v1.begin(),v1.end(),comp1);
    sort(all(v2),comp2);
    
    for(int i=0;i<n;i++){
        if(v1[i]==v2[i]) sam++;
    }

    cout<<"Case #"<<t<<": "<<sam<<endl;

}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll tt;
    cin>>tt;
    ll x=tt;
    while(tt--){
        solve(x-tt);
    }

//solve();

    return 0;
}