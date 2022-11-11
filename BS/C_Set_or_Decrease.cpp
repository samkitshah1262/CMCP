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
	long long int dc=1,d,sum=0,k,cnt=0,sc=0,mult=0,i,n,x,y,a,b,c,sam=0;
    cin>>n>>k;
    vl v;
    forn(i,n){
        cin>>a;
        sam=sam+a;
        v.pb(a);
    }
    //cout<<sum<<" sum"<<endl;
    sort(rall(v));
    d=INT64_MAX;
    forn(i,n){
      d=min(d,max(0LL,sam-k+i)/(i+1)+i);
      sam=sam+v[n-1]-v[i];
    }
    cout<<d<<endl;
    // i=n-1;
    // while(d>0){
    //     cout<<d<<" dprev"<<endl;
    //     // if(d-dc*sc<=0 || d-v[i]+v[0]<=0){
    //     //     sam++;
    //     //     break;
    //     // }
    //     if(d-v[i]+v[0]<d-dc*(sc+1)){
    //         sc++;
    //         d=d-v[i]+v[0];
    //         i--;
    //         cout<<"set val "<<d<<endl;
    //     }
    //     else{
    //         //dc++;
    //         d=d-mult*sc-dc;
    //         mult++;
    //         v[0]--;
    //         cout<<"dec val "<<d<<endl;
    //     }
    //     sam++;
    // }
    // cout<<sam<<endl;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	cin>>tt;
	while(tt--){
		solve();
	}



	return 0;
}
/**
 *    author:  tourist
 *    created: 27.12.2021 17:38:21       
**/
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   int tt;
//   cin >> tt;
//   while (tt--) {
//     int n;
//     long long k;
//     cin >> n >> k;
//     vector<long long> a(n);
//     for (int i = 0; i < n; i++) {
//       cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     vector<long long> pref(n + 1);
//     for (int i = 0; i < n; i++) {
//       pref[i + 1] = pref[i] + a[i];
//     }
//     long long ans = (long long) 9e18;
//     for (int t = 0; t <= n - 1; t++) {
//       long long sum = pref[n - t] + a[0] * t;
//       long long cur = t;
//       if (sum > k) {
//         long long diff = sum - k;
//         cur += (diff + t) / (t + 1);
//       }
//       ans = min(ans, cur);
//     }
//     cout << ans << '\n';
//   }
//   return 0;
// }
