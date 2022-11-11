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
// 	for(auto element: arr) {
// 		cout << element << " ";
// 	}
// 	cout << endl;
// }

// // read and write into files, rather than standard i/o
// void setup(string s) {
// 	freopen((s+".in").c_str(), "r", stdin);
// 	freopen((s+".out").c_str(), "w", stdout);
// }

// const int M = 1e9+7;


// void solve(){
// 	int i,n,x,y,a,b,c,sam=0;
//     cin>>n;
//     vector<pair<int,pair<int,int>>> v;
//     forn(i,n){
//         cin>>a>>b;
//         pair<int,pair<int,int>> p;
//         p.F=b-a;
//         p.S.F=a;
//         p.S.S=b;
//         v.pb(p);
//     }

// }

// int main(void) {
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
	
// 	ll tt;
// 	cin>>tt;
// 	while(tt--){
// 		solve();
// 	}



// 	return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int ntest;
    cin >> ntest;
    while (ntest--) {
        int n;
        cin >> n;
        vector mark(n + 1, vector<bool>(n + 1));
        vector<int> l(n), r(n);
        for (int i = 0; i < n; ++i) {
            cin >> l[i] >> r[i];
            mark[l[i]][r[i]] = true;
        }
        for (int i = 0; i < n; ++i) {
            for (int d = l[i]; d <= r[i]; ++d) {
                if ((d == l[i] or mark[l[i]][d - 1]) and (d == r[i] or mark[d + 1][r[i]])) {
                    cout << l[i] << ' ' << r[i] << ' ' << d << '\n';
                    break;
                }
            }
        }
    }
    
    return 0;
}