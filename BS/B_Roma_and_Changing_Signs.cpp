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
// 	int i,n,x,y,a,b,c,sam=0,sum=0;
//     vi v;
//     cin>>n>>x;
//     vi vtemp;
//     forn(i,n){
//         cin>>a;
//         //sum=sum+a;
//         if(a<=0){
//             vtemp.pb(a);
//         }
//         else{
//             v.pb(a);
//         }
//     }
//     //sort(all(v));
//     sort(all(vtemp));
//     // for(i=0;i<x;i++){
//     //     v.pb(vtemp[i]*(-1));
//     //     sam=sam+vtemp[i]*(-1);
//     // }
//     i=0;
//     while(x--){
//         if(i==vtemp.size())
//         v.pb(vtemp[i]*(-1));
//         sam=sam+vtemp[i]*(-1);
//         i++;
//     }
//     if(i!=x-1){
//         i++;
//         if(i%2==0){
//             forn(j,v.size()){
//                 sum=sum+v[j];
//             }
//             cout<<sum;
//             return;
//         }
//         else{
//             sort(all(v));
//             forn(j,n){
//                 if(j==0){
//                     sum=sum-v[0];
//                 }
//                 else{
//                     sum=sum+v[j];
//                 }
//             }
//             cout<<sum;
//             return;
//         }
//     }
//     else{
//         forn(i,vtemp.size()){
//             sum=sum+vtemp[i];
//         }
//         sum=sum+sam;
//         forn(i,v.size()){
//             sum=sum+v[i];
//         }
//         cout<<sum;
//         return;
//     }
//     // if(vtemp.size()==0){
//     //     if(x%2==0){
//     //         cout<<sum;
//     //     }
//     //     else{
//     //         cout<<sum-2*v[0];
//     //     }
//     // }
//     // else{
//     //     i=0;
//     //     while(x--){
//     //         if(i==vtemp.size()){
//     //             //cout<<"san"<<endl;
//     //             break;
//     //         }
//     //         //cout<<sum<<" sumbefore"<<endl;
//     //         sum=sum+2*vtemp[i]*(-1);
//     //         //cout<<sum<<" sumafter"<<endl;
//     //         i++;
//     //     }
//     //     x++;
//     //     //cout<<x<<" xrem"<<endl;
//     //     if(x>0){
//     //         if(x%2==0){
//     //             cout<<sum;
//     //         }
//     //         else{
//     //             cout<<sum+2*vtemp[vtemp.size()-1];
//     //         }
//     //     }
//     //     else{
//     //         cout<<sum;
//     //     }
//     // }
// }

// int main(void) {
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
	
// 	// ll tt;
// 	// cin>>tt;
// 	// while(tt--){
// 	// 	solve();
// 	// }
//     solve();



// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void fst()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
}
typedef long long ll;
#define deb(n) cerr << #n << "=" << n << "\n";

int32_t main()
{
	fst();
	int n, k;
	cin >> n >> k;
	int sum = 0;
	int mn = 1e9;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x < 0 && k > 0)
		{
			x = -x;
			k--;
		}
		sum += x;
		mn = min(x, mn);
	}
	if (k & 1)
	{
		sum -=2* mn;
	}
	cout<<sum;

}