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


class Solution {
public:
    const int M=1e9+7;
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        long long int dp[n][m][50];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int l=0;l<50;l++){
                    dp[i][j][l]=0;
                }
            }
        }
        dp[0][0][grid[0][0]%k]=1;
        for(int i=1;i<n;i++){
            for(int l=0;l<50;l++){
                if(dp[i-1][0][l]){
                    int x=(l+grid[i][0])%k;
                    // dp[i][0][l]=0;
                    dp[i][0][x]++;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int l=0;l<50;l++){
                if(dp[0][i-1][l]){
                    int x=(l+grid[0][i])%k;
                    // dp[i][0][l]=0;
                    dp[0][i][x]++;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                for(int l=0;l<50;l++){
                    if(dp[i-1][j][l] ){
                        int x=(l+grid[i][j])%k;
                        dp[i][j][x]=(dp[i][j][x]+dp[i-1][j][l])%M;
                    }
                    if(dp[i][j-1][l]){
                        int x=(l+grid[i][j])%k;
                        dp[i][j][x]=(dp[i][j][x]+dp[i][j-1][l])%M;
                    }
                }
            }
        }
        return dp[n-1][m-1][0]%M;
    }
};