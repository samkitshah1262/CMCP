#include <bits/stdc++.h>
#include <sys/resource.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

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
	ll i,n,x,y,a,b,c,sam=0;
    cin>>a>>b>>c;
    x=abs(a+c-2*b);
    if(x%3==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

int main() {
   struct rusage r_usage;
   int *p = 0;
   while(1) {
      p = (int*)malloc(sizeof(int)*1000);
      int ret = getrusage(RUSAGE_SELF,&r_usage);
      if(ret == 0)
         printf("Memory usage: %ld kilobytes\n",r_usage.ru_maxrss);
      else
         printf("Error in getrusage. errno = %d\n", errno);
      usleep(10);
   }
   return 0;
}


	ll tt;
	cin>>tt;
	while(tt--){
		solve();
	}



	return 0;
}