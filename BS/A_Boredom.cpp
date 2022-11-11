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
	long long int i,n,x,y,a,b,c=0,sam=0;
    cin>>n;
    vl v(100002,0);
    vl dp(100000+2,-1);
    multiset<long long int> s;
    forn(i,n){
        cin>>a;
        v[a]++;
        s.insert(a);
    }
    dp[0]=0;
    dp[1]=v[1];
    fora(i,2,100000+2){
        //dp[i]=v[i];
        dp[i]=max(dp[i-1],dp[i-2]+i*v[i]);
    }
    cout<<dp[100001];
    //cout<<s.size()<<" size"<<endl;
    //set<pair<ll,ll>> v;
    // while(s.size()!=0){    
    //     for(auto itr=s.begin();itr!=s.end();itr++){
    //         if(s.count(*itr)*(*itr)>sam){
    //             sam=s.count(*itr)*(*itr);
    //             x=*itr;
    //         }
    //         // pair<ll,ll> p;
    //         // p.F=count(*itr);
    //         // p.S=*itr;
    //         // v.pb(p);
    //     }
    //     c=c+s.count(x)*x;
    //     y=s.erase(x-1);
    //     y=s.erase(x+1);
    //     y=s.erase(x);
    //     sam=0;
        
    //     // cout<<x<<" x"<<endl;
    //     // cout<<s.size()<<" size"<<endl;
    // }
    // // for(i=1;i<n-1;i++){
    // //     if(v[i-])
    // // }
    // cout<<c;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// ll tt;
	// cin>>tt;
	// while(tt--){
	// 	solve();
	// }
    solve();



	return 0;
}

// #include <cstdlib>
// #include <cstring>
// #include <memory>
// #include <cstdio>
// #include <iostream>
// #include <cmath>
// #include <string>
// #include <stack>
// #include <queue>
// #include <vector>
// #include <set>
// #include <map>
// #include <algorithm>
// using namespace std;
// typedef signed long long ll;

// #undef _P
// #define _P(...) (void)printf(__VA_ARGS__)

// #define FOR(x,to) for(x=0;x<to;x++)
// #define ITR(x,c) for(__typeof(c.begin()) x=c.begin();x!=c.end();x++)
// #define ZERO(a) memset(a,0,sizeof(a))
// void _fill_int(int* p,int val,int rep) {int i;  FOR(i,rep) p[i]=val;}
// #define MINUS(a) _fill_int((int*)a,-1,sizeof(a)/4)
// //-------------------------------------------------------

// int N,A[100005];
// ll dp[100005];

// void solve() {
//     int f,i,j,k,l,x,y;
//     cin>>N;
//     FOR(i,N) {
//         cin>>x;
//         A[x]++;
//     }
//     dp[1]=A[1];
//     for(i=2;i<=100002;i++) {
//         dp[i]=max(dp[i-1],dp[i-2]+A[i]*(ll)i);
//     }
//     cout << dp[100002] << endl;
    
    
// }


// int main(int argc,char** argv){
//     string s;
//     if(argc==1) ios::sync_with_stdio(false);
//     for(int i=1;i<argc;i++) s+=argv[i],s+='\n';
//     for(int i=s.size()-1;i>=0;i--) ungetc(s[i],stdin);
//     solve();
//     return 0;
// }

