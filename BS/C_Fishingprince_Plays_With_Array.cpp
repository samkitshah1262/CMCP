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
    long long int i,n,x=0,y=0,a,b,c,sam=0,m,sam2=0;
    cin>>n>>x;
    deque<pl> v1;
    forn(i,n){
        cin>>a;
        sam+=a;
        if(i!=0 && v1[v1.size()-1].F==a){ 
            v1[v1.size()-1].S++;
        }
        else if(a%x==0){
            ll t=1,c;
            while(a%x==0){
                t=t*x;
                c=a/x;
                a=a/x;
            }
            if(i!=0 && v1[v1.size()-1].F==c){
                v1[v1.size()-1].S+=t;
            }
            else{ 
                v1.push_back({c,t});
            }
        }
        else{
            v1.push_back({a,1});
        } 
    }
    deque<pl> v2;
    cin>>m;
    forn(i,m){
        cin>>a;
        sam2+=a;
        if(i!=0 && v2[v2.size()-1].F==a){
            v2[v2.size()-1].S++;
        }
        else if(a%x==0){
            ll t=1,c;
            while(a%x==0){
                t=t*x;
                c=a/x;
                a=a/x;
            }
            if(i!=0 && v2[v2.size()-1].F==c){
                v2[v2.size()-1].S+=t;
            }
            else{
                v2.push_back({c,t});
            }
        }
        else{
            v2.push_back({a,1});
        }
    }
    int ans=1;
    if (sam!=sam2 || v2.size()!=v1.size()){
        ans=0;
    }
    else{
        forn(i,v1.size()){
            if (v1[i].F!=v2[i].F || v1[i].S!=v2[i].S){
                ans=0;
            }
        }
    }
    if (ans!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
