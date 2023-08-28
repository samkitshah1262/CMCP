// #include <bits/stdc++.h>

// using namespace std;

// using ll = long long;
// using vi = vector<int>;
// using vvi = vector<vector<int>>;
// using vl = vector<ll>;
// using vvl = vector<vector<ll>>;
// using pi = pair<int, int>;
// using pl = pair<ll, ll>;


// #define all(x) begin(x), end(x)
// #define rall(x) rbegin(x), rend(x)
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define endl '\n'
// #define forn(i, n) for(ll i = 0; i < n; i++)
// #define fora(i, a, n) for(ll i = a; i < n; i++)
// #define inp(e) int e; cin >> e
// #define inpl(e) ll e; cin >> e
// #define inps(e) string e; cin >> e
// #define T int tt; cin >> tt; while(tt--)


// template<typename U>
// void print(U arr) {
//     for(auto element: arr) {
//         cout << element << " ";
//     }
//     cout << endl;
// }

// // read and write into files, rather than standard i/o
// void setup(string s) {
//     freopen((s+".in").c_str(), "r", stdin);
//     freopen((s+".out").c_str(), "w", stdout);
// }

// const int M = 1e9+7;


// void solve(){
//     long long int i,n,x,y,a,b,c,sam=0;
//     cin>>n;
//     long double ans;
//     ans=(0.5+sqrtl(0.25+2*n));
//     long double ans1 = n - floor(ans)*(floor(ans)-1)/2;
    
//     // if ans not integer
//     if(ans1==0){
//         cout<<ans<<endl;
//     }
//     else{
//         sam = ans + ans1;
//         cout<<sam<<endl;
//     }
// }

// int main(void) {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     ll tt;
//     cin>>tt;
//     while(tt--){
//         solve();
//     }

// //solve();

//     return 0;
// }

#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
int32_t main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        int l = 0, r = min<int>(2e9, 2 * n);
        while (r - l > 1) {
            int m = (l + r) >> 1;
            // m = x + y, answer = x + 2 * y
            if (m * (m - 1) / 2 + m < n) {
                l = m;
            } else {
                r = m;
            }
        }
        int y = n - r * (r - 1) / 2;
        if ((r + 1) * r / 2 <= n) {
            cout << min(r + y, r + 1 + n - (r + 1) * r / 2) << "\n";
        } else {
            cout << r + y << "\n";
        }
    }
    return 0;
}