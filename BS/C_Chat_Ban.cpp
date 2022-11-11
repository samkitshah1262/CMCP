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

// ll sumk(ll x){
//     return (x*(x+1))/2;
// }

// void solve(){
// 	long long int i,n,x,y,a,b,c,sam=0,flag=0;
//     cin>>x>>y;
//     ll l=1,r=2*x-1;
//     sam=2*x-1;
//     bool k=false;
//     while(l<r){
//         ll m=(l+r)/2>>1;
//         if(m>=x){
//             if(sumk(x)+sumk(x-1)-sumk(2*x-1-m)>=y){
//                 flag=1;
//                 k=true;
//             }
//             else{
//                 flag=0;
//                 k=false;
//             }
//         }
//         else{
//             if(sumk(m)>=y){
//                 flag=1;
//                 k=true;
//             }
//             else{
//                 flag=0;
//                 k=false;
//             }
//         }
//         if(k){
//             sam=m;
//             r=m-1;
//         }
//         else{
//             l=m+1;
//         }
//     }
//     cout<<sam<<endl;

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

long long get(int x) {
    return x * 1ll * (x + 1) / 2;
}

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
    while (t--) {
        int k;
        long long x;
        cin >> k >> x;
        long long l = 1, r = 2 * k - 1;
        long long res = 2 * k - 1;
        bool over = false;
        while (l <= r) {
            int mid = (l + r) >> 1;
            if (mid >= k) {
                over = (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);
            } else {
                over = (get(mid) >= x);
            }
            if (over) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << res << endl;
    }
    
    return 0;
}