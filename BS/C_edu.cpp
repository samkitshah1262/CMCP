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

const int M = 998244353;


// use modulo correctly to avoid overflow




// vector<vector<long long int>> dp1(2,vector<long long int>(61,0));
vector<long long int> dp2(62,0);
vector<long long int> dp1(62,0);

vector<vl> dp(2,vl(62,0));

// long long int binomialCoeff(int n, int k){
//     long long int res = 1;

//     if (k > n - k)
//         k = n - k;

//     for (int i = 0; i < k; ++i) {
//         res = ((res%M)*(n - i))%M;
//         res = (res/(i + 1))%M;
//     }
//     res=res%M;
//     return res%M;
// }


long long int binomialCoeff(int n, int r, int p)
{
    // Optimization for the cases when r is large
    if (r > n - r)
        r = n - r;
 
    // The array C is going to store last row of
    // pascal triangle at the end. And last entry
    // of last row is nCr
    long long int C[r + 1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1; // Top row of Pascal Triangle
 
    // One by constructs remaining rows of Pascal
    // Triangle from top to bottom
    for (int i = 1; i <= n; i++) {
 
        // Fill entries of current row using previous
        // row values
        for (int j = min(i, r); j > 0; j--)
 
            // nCj = (n-1)Cj + (n-1)C(j-1);
            C[j] = (C[j] + C[j - 1]) % p;
    }
    return C[r];
}
 


void ncr1(int n){
    for(int i=2;i<=n+1;i+=2){
        dp1[i]=binomialCoeff(i-1,i/2-1,M);
        // cout<<dp1[i]<<" dp1[i] "<<i<<endl;
    }
}


void ncr2(int n){
    for(int i=2;i<=n+1;i+=2){
        dp2[i]=binomialCoeff(i,i/2,M);
        // cout<<dp2[i]<<" dp2[i] "<<i<<endl;
    }
}


void hi(){
    dp[0][2]=1;
    dp[1][2]=0;

    for(int i=4;i<=61;i+=2){
        dp[0][i]=(dp[1][i-2]+dp1[i]);
        dp[1][i]=(dp2[i]-1-dp[0][i]);
        // cout<<dp[0][i]<<" dp[0][i] "<<i<<endl;
        // cout<<dp[1][i]<<" dp[1][i] "<<i<<endl;
    }
}

// void hi()
// {
//     dp[0][2] = 1;
//     dp[1][2] = 0;

//     for (int i = 4; i <= 61; i += 2)
//     {
//         dp[0][i] = (dp[1][i - 2]%M + dp1[i]%M) % M;
//         dp[1][i] = (-dp[0][i]%M + dp2[i]%M - 1)%M;
//         if (dp[1][i]<0){
//             dp[1][i]+=M;
//         }
//         if (dp[0][i]<0){
//             dp[0][i]+=M;
//         }
//     }
// }

void solve(){
    long long int i,n,x,y,a,b,c,sam=0;
    cin>>n;
    cout<<dp[0][n]%M<<" "<<dp[1][n]<<" "<<1<<endl;

}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ncr1(60);
    ncr2(60);

    hi();
    ll tt;
    cin>>tt;
    while(tt--){
        solve();
    }

//solve();

    return 0;
}