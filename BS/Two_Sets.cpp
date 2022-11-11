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
int N;

int main(){
    scanf("%d", &N);
    if(N%4 == 1 || N%4 == 2)    printf("NO\n");
    else if(N%4 == 3){
        printf("YES\n");
        printf("%d\n", N/2);
        for(int i = 2; i <= N/2; i += 2)
            printf("%d %d ", i, N-i);
        printf("%d\n%d\n", N, N/2+1);
        for(int i = 1; i <= N/2; i += 2)
            printf("%d %d ", i, N-i);
    } else {
        printf("YES\n");
        printf("%d\n", N/2);
        for(int i = 2; i <= N/2; i += 2)
            printf("%d %d ", i, N-i+1);
        printf("\n%d\n", N/2);
        for(int i = 1; i <= N/2; i += 2)
            printf("%d %d ", i, N-i+1);
    }
}