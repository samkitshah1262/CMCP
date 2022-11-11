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
// 	long long int i,n,x,y,a,b,c,sam=0;
//     cin>>n;
//     vector<pair<ll,ll>>  v;
//     vector<pair<ll,ll>> vans;
//     forn(i,9){
//         cin>>a;
//         pair<ll,ll> p;
//         p.F=a;
//         p.S=i+1;
//         v.pb(p);
//     }
//     sort(all(v));
//     if(n<v[0].F){
//         cout<<-1;
//         return;
//     }
//     forn(i,v.size()){
//         if((n/v[i].F)<(n/v[0].F)){
//             continue;
//         }
//         else{
//             vans.pb(make_pair(v[i].S,v[i].F));
//         }
//     }
//     vans.pb(make_pair(v[0].S,v[0].F));
//     sort(all(vans));
//     x=n/vans[vans.size()-1].S;
//     forn(i,x){
//         cout<<vans[vans.size()-1].F;
//     }
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
/*
** In the name of God **
*/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <iterator>

using namespace std;
#define FR(i,n) for(int (i)=0;(i)<(n);(i)++)
#define FOR(i,c,n) for(int (i)=(c);(i)<(n);(i)++)
#define REP(it,v,cont) for(cont::iterator (it)=(v).begin();(it)!=(v).end();++(it))
#define CLR(a,c) memset((a),(c),sizeof (a))
#define ALL(v) (v).begin(),(v).end()
#define EPS 1e-8
#define MOD 1000000007
#define INF 100000000
#define SQR(a) ((a)*(a))
#define e(a,b) (fabs(a-b)<EPS)
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;

struct Number
{
	int cost;
	int value;
	Number(){}
	bool operator<(const Number & a) const
	{
		if(a.cost != cost) return cost < a.cost;
		return value>a.value;
	}
};
Number a[10];
int Index(int n)
{
	FR(i,10)
		if(a[i].value==n) return i;
	return 1;
}

int main()
{
	//freopen("a.in","r",stdin);
	//freopen("a.out","w",stdout);
	int v; cin>>v;
	
	a[0].cost=-1000000;
	a[0].value=0;
	FOR(i,1,10) 
	{ cin>>a[i].cost; a[i].value=i;}
	sort(a,a+10);
	string res="";
	while(v>=a[1].cost)
	{
		v-=a[1].cost;
		res += a[1].value+'0';
	}
	if(res.empty())
	{
		puts("-1");
		return 0;
	}
	if(v)
	{
		for(int j=0;j<res.size();j++)
			for(int i=1;i<10;i++)
				if(a[i].cost == a[1].cost)continue;
				else if(v+a[Index(res[j]-'0')].cost-a[i].cost>=0)
				{
					if((res[j]-'0')<a[i].value)
					{
						v = v+a[Index(res[j]-'0')].cost-a[i].cost;
						res[j] = a[i].value+'0';
					}
				}
	}
	puts(res.c_str());
	return 0;
}