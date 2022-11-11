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
//     cin>>x>>y;
//     // cout<<x<<y;
//     deque<ll> v1;
//     deque<ll> v2;
//     forn(i,x-1){
//         cin>>a;
//         v1.pb(a);
//     }
//     forn(i,y-1){
//         cin>>a;
//         v2.pb(a);
//     }
//     sort(all(v1));
//     sort(all(v2));
//     vl t1;
//     vl t2;
//     forn(i,x-1){
//         if(i==0){
//             t1.pb(v1[0]);
//         }
//         else{
//             t1.pb(v1[i]+t1[i-1]);
//         }
//     }
//     forn(i,y-1){
//         if(i==0){
//             t2.pb(v2[0]);
//         }
//         else{
//             t2.pb(v2[i]+t2[i-1]);
//         }
//     }
//     c=x+y-2;
//     a=x-2;
//     b=y-2;
//     while(true){
//         if(c<0 || b<0 || a<0){
//             break;
//         }
//         if(v1[v1.size()-1]>v2[v2.size()-1]){
//             sam+=v1[v1.size()-1]+t2[b];
//             a--;
//             v1.pop_back();
//         }
//         else if(v1[v1.size()-1]==v2[v2.size()-1]){
//             if(v1.size()<v2.size()){
//                 sam+=v2[v2.size()-1]+t1[a];
//                 b--;
//                 v2.pop_back();
//             }
//             else{
//                 sam+=v1[v1.size()-1]+t2[b];
//                 a--;
//                 v1.pop_back();
//             }
//         }
//         else{
//             sam+=v2[v2.size()-1]+t1[a];
//             b--;
//             v2.pop_back();
//         }
//         c--;
//     }
//     if(a<0){
//         while(true){
//             if(b<0){
//                 break;
//             }
//             sam+=v2[v2.size()-1]+t2[b];
//             b--;
//             n=v2[v2.size()-1];
//             v2.pop_back();
//         }
//     }
//     else{
//         while(true){
//             if(a<0){
//                 break;
//             }
//             sam+=v1[v1.size()-1]+t1[a];
//             a--;
//             n=v1[v1.size()-1];
//             v1.pop_back();
//         }
//     }
//     sam-=n;
//     cout<<sam<<endl;
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

#include<cstdio>
#include<algorithm>
using namespace std;
#define min(a,b) (((a)<(b))?(a):(b))
typedef long long LL;
bool comp(LL a, LL b){ return a>=b;}
LL x[1001],y[1001],dp[1001][1001];
int main(){
	LL i,j,m,n,t;
	for(scanf("%lld",&t);t--;){
		scanf("%lld %lld",&m,&n);
		m--;
		n--;
		for(i=1;i<=m;i++)
			scanf("%lld",x+i);
		for(i=1;i<=n;i++)
			scanf("%lld",y+i);
		sort(x+1,x+1+m,comp);
		sort(y+1,y+n+1,comp);
		dp[0][0] = 0;
		for(i=1;i<=m;i++) dp[i][0] = x[i] + dp[i-1][0];
		for(i=1;i<=n;i++) dp[0][i] = y[i] + dp[0][i-1];
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				LL t1 = dp[i-1][j] + x[i]*(j+1);
				LL t2 = dp[i][j-1] + y[j]*(i+1);
				dp[i][j] = min(t1,t2);
			}
		}
		printf("%lld\n",dp[m][n]);
	}
	return 0;
}