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
// const int maxn = 201010;
// ll n;
// ll v[maxn];
// bool check(ll x){
//     vl vc(v,v+n);
//     for(ll i=n-1;i>=2;--i){
//         if(vc[i]<x){
//             return false;
//         }
//         ll y= min(v[i],vc[i]-x)/3;
//         vc[i-1]+=y;
//         vc[i-2]+=2*y;
//     }
//     return vc[0]>=x && vc[1]>=x;
// }



// void solve(){
// 	long long int i,n,x,y,a,b,c,sam=0;
//     cin>>n;
//     //ll v[maxn];
//     forn(i,n){
//         cin>>v[i];
//     }
//     //vl vc=v;
//     //sort(all(vc));
//     ll l=0,r=*max_element(v,v+n);
//     //reverse(all(v));
//     while(l<r){
//         ll m = l+(r-l+1)/2;
//         if(check(m)){
//             l=m;
//         }
//         else{
//             r=m-1;
//         }
//     }
//     cout<<l<<endl;
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

const int maxn = 201010;
int n;
int h[maxn];

bool check(int x) {
    vector<int> cur_h(h, h + n);
    for (int i = n - 1; i >= 2; --i) {
        if (cur_h[i] < x) return false;
        int d = min(h[i], cur_h[i] - x) / 3;
        cur_h[i - 1] += d;
        cur_h[i - 2] += 2 * d;
        // we don't need to fix cur_h[i] since we are not going back
    }
    return cur_h[0] >= x and cur_h[1] >= x;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int ntest;
    cin >> ntest;
    while (ntest--) {
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> h[i];
        int l = 0, r = *max_element(h, h + n);
        while (l < r) {
            int mid = l + (r - l + 1) / 2;
            if (check(mid)) l = mid;
            else r = mid - 1;
        }
        cout << l << '\n';
    }
    
    return 0;
}