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


// // int lis(vl v,ll i,ll n,ll p){
// //     if(i==n){
// //         return 0;
// //     }
// //     ll ex=lis(v,i+1,n,p);
// //     ll in=0;
// //     if(v[i]>p){
// //         in=1+lis(v,i+1,n,v[i]);
// //     }
// //     return max(in,ex);
// // }

// int CeilIndex(std::vector<ll> v, ll l, ll r, ll key)
// {
//     while (r - l > 1) {
//         ll m = l + (r - l) / 2;
//         if (v[m] >= key)
//             r = m;
//         else
//             l = m;
//     }
 
//     return r;
// }
 
// int Lis(std::vector<ll> v){
//     if (v.size() == 0)
//         return 0;
 
//     vector<ll> tail(v.size(), 0);
//     int length = 1; 
 
//     tail[0] = v[0];
//     for (size_t i = 1; i < v.size(); i++) {

//         if (v[i] < tail[0])
//             tail[0] = v[i];

//         else if (v[i] > tail[length - 1])
//             tail[length++] = v[i];

//         else
//             tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i];
//     }
 
//     return length;
// }

// void solve(){
// 	long long int i,m,n,x,y,a,b,c,sam=0;
//     cin>>n>>m;
//     vl vn;
//     vl vm;
//     forn(i,n){
//         cin>>a;
//         vn.pb(a);
//     }
//     forn(i,m){
//         cin>>b;
//         vm.pb(b);
//     }
//     y=Lis(vm);
//     x=Lis(vn);
//     cout<<x+y<<endl;
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
#include<bits/stdc++.h>
using namespace std;
#define int long long

int CeilIndex(vector<int>& v, int l, int r, int key){
	while (r - l > 1) {
		int m = l + (r - l) / 2;
		if (v[m] >= key)
			r = m;
		else
			l = m;
	}
	return r;
}

int LIS_vec(vector<int>& v){
	if (v.size() == 0)
		return 0;
	std::vector<int> tail(v.size(), 0);
	int length = 1; 
	tail[0] = v[0];
	for (size_t i = 1; i < v.size(); i++) {
		if (v[i] < tail[0])
			tail[0] = v[i];
		else if (v[i] >= tail[length - 1])
			tail[length++] = v[i];
		else
			tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i];
	}
	return length;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tc=1 ;
    cin>>tc ;
    while(tc--){
        int n,m ;
        cin>>n>>m ;
        vector<int> a(n) , b(m) ;
        for(int i=0 ; i<n ; i++) cin>>a[i] ;
        for(int i=0 ; i<m ; i++) cin>>b[i] ;
        int ans=0 ;
        ans+=LIS_vec(a) ;
        ans+=LIS_vec(b) ;
        cout<<ans<<"\n" ;
    }
    return 0 ;
}