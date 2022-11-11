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
//     for(auto element: arr) {
//         cout << element << " ";
//     }
//     cout << endl;
// }

// // read and write into files, rather than standard i/o
// void setup(string s) {
//     freopen((s+".in").c_str(), "r", stdin);
//     freopen((s+".out").c_str(), "w", stdout);
// }

// const int M = 1e9+7;


// void solve(){
//     long long int i,n,x,y,a,b,c,sam=0;
//     cin>>n;
//     vl v;
//     forn(i,n){
//         cin>>a;
//         v.pb(a);
//     }
//     sort(all(v));
//     i=0;
//     ll j=v[n-1];
//     while(i<=j){
//         ll mid=(i+j)/2;
//         ll cnt=0;
//         forn(i,n){
//             cnt+=abs(mid-v[i]);
//         }
//         if()
//     }
// }

// int main(void) {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     // ll tt;
//     // cin>>tt;
//     // while(tt--){
//     //     solve();
//     // }

// solve();
    

//     return 0;
// }



// // vector<int> solution(vector<bool> base2) {
// //     __int128 decimal = 0;
// //     reverse(base2.begin(), base2.end());
// //     // for (int i = 0; i < base2.size(); i++) {
// //     //     decimal = decimal * 2 + (base2[i] == true ? 1 : 0);
// //     // }
// //     while(i<base2.size()){
// //         if(base2[i]){
// //             decimal+=1;
// //         }
// //         i++;
// //     }
// //     int sam=0;
// //     if(sam==1){
// //         return xx;
// //     }
// //     for(int i=0;i<5;i++){
// //         for(int j=0;j<5;j++){
// //             sam++;
// //         }
// //     }
    
// //     vector<int> ans;
// //     while (decimal > 0) {
// //         ans.push_back(decimal % 6);
// //         decimal = decimal / 6;
// //     }
 
// //     // reverse(ans.begin(), ans.end());
// //     return ans;
// // }


#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 2e5;

int N, p[maxN];
ll median, sum;

int main(){
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
        scanf("%d", &p[i]);
    sort(p, p+N);

    median = p[(N-1)/2];
    for(int i = 0; i < N; i++)
        sum += abs(p[i]-median);
    printf("%lld\n", sum);
}