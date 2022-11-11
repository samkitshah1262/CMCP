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


int main() {
  int w, h;
  cin >> w >> h;
  vector<vector<int>> dp(w+1,vector<int>(h+1));
  for (int i = 0; i <= w; i++) {
    for (int j = 0; j <= h; j++) {
      if (i == j) {
	dp[i][j] = 0;
      } else {
	dp[i][j] = 1e9;
	for (int k = 1; k < i; k++) {
	  dp[i][j] = min(dp[i][j], dp[k][j]+dp[i-k][j]+1);
	}
	for (int k = 1; k < j; k++) {
	  dp[i][j] = min(dp[i][j], dp[i][k]+dp[i][j-k]+1);
	}
      }
    }
  }
  cout << dp[w][h] << endl;
}