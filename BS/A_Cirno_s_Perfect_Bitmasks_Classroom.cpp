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

vi decToBinary(int n)
{
    vi v;
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            // cout << "1";
            v.pb(1);
        else
            // cout << "0";
            v.pb(0);
    }
    return v;
}
// string bin_string = "10101010";
// int number =0;
// number = stoi(bin_string, 0, 2);

void solve(){
    long long int i,n,x,y,a,b,c=0,sam=0;
    cin>>n;
    vi v=decToBinary(n);
    // if(v[v.size()-1]==0){
    //     sam++;
    // }
    if(n==1){
        cout<<3<<endl;
        return;
    }
    if(n%2==1){
        cout<<1<<endl;
        return;
    }
    x=n;
    while(true){
        if(x==0){
            break;
        }
        if(x%2!=0 && x!=1){
            // cout<<3<<endl;
            // return;
            sam=1;
            break;
        }
        x=x/2;
    }
    if(sam!=1){
        cout<<n+1<<endl;
        return;
    }
    for(i=v.size()-1;i>=0;i--){
        if(v[i]==1 && i!=v.size()-1){
            break;
        }
        c++;
    }
    string s="1";
    c--;
    while(c--){
        s+='0';
    }
    s+='0';
    // cout<<s<<endl;
    // forn(i,v.size()){
    //     cout<<v[i];
    // }
    // cout<<"HI"<<endl;
    ll number = stoi(s, 0, 2);
    cout<<number<<endl;
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