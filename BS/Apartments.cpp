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
// 	long long int i,n,x,y,a,b,j,m,k,c,sam=0;
//     cin>>n>>m>>k;
//     vector <pair<long long int,long long int>> r;
//     vector <pair<long long int,long long int>> s;
//     forn(i,n){
//         pair<long long int,long long int> p;
//         cin>>a;
//         p.F=a;
//         p.S=0;
//         s.pb(p);
//     }
//     forn(i,m){
//         pair<long long int,long long int> p;
//         cin>>b;
//         p.F=b;
//         p.S=1;
//         s.pb(p);
//     }
//     //sort(all(r));
//     sort(all(s));
//     fora(i,1,s.size()-1){
//         if(s[i].S==1){
//             if(s[i-1].F>=s[i].F-k || s[i+1].F<=s[i].F+k ){
//                 sam++;
//             }
//         }
//     }
//     cout<<sam;
// }

// int main(void) {
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
	
// 	// ll tt;
// 	// cin>>tt;
// 	// while(tt--){
// 		solve();
// 	// }



// 	return 0;
// }


#include <bits/stdc++.h>

using namespace std;
const int maxN = 2e5+1;

int N, M, K, a[maxN], b[maxN];

int main(){
    scanf("%d %d %d", &N, &M, &K);
    for(int i = 0; i < N; i++)  scanf("%d", &a[i]);
    for(int i = 0; i < M; i++)  scanf("%d", &b[i]);

    sort(a, a+N);
    sort(b, b+M);

    int cnt = 0;
    int aptr = 0, bptr = 0;
    while(aptr < N){
        while(bptr < M && b[bptr] < a[aptr]-K)  bptr++;
        if(bptr < M && a[aptr]-K <= b[bptr] && b[bptr] <= a[aptr]+K){
            cnt++;
            aptr++;
            bptr++;
        } else aptr++;
    }
    printf("%d\n", cnt);
}