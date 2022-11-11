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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (s == string(n, '0')) {
      cout << 0 << '\n';
      return;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      cnt += (s[i] == '1');
    }
    int ans = 11 * cnt;
    int L = 0;
    int R = n - 1;
    while (s[L] == '0') {
      L += 1;
    }
    while (s[R] == '0') {
      R -= 1;
    }
    R = n - 1 - R;
    if (cnt == 1) {
      if (R <= k) {
        ans -= 10;
      } else {
        if (L <= k) {
          ans -= 1;
        }
      }
    } else {
      if (L + R <= k) {
        ans -= 11;
      } else {
        if (R <= k) {
          ans -= 10;
        } else {
          if (L <= k) {
            ans -= 1;
          }
        }
      }
    }
    cout << ans << '\n';
    // long long int i,n,x,y,a,b,c=0,sam=0;
    // cin>>n>>x;
    // string s;
    // cin>>s;
    // deque<ll> v;
    // if(n==2){
    //     cout<<((s[0]-'0')*10+s[1]-'0')<<endl;
    //     return;
    // }
    // forn(i,n){
    //     if(s[i]=='1'){
    //         if(sam==0){
    //             a=i;
    //         }
    //         sam++;
    //         b=i;
    //     }
    // }
    //      if(n-1-b>x){
    //         if(a>x){
    //             cout<<sam*11<<endl;
    //             return;
    //         }
    //         else{
    //             cout<<sam*11-1<<endl;
    //             return;
    //         }
    //     }
    //     else{
    //         if(a>x-(n-1-b)){
    //             cout<<(sam-1)*11+1<<endl;
    //             return;
    //         }
    //         else{
    //             cout<<(sam-1)*11<<endl;
    //             return;
    //         }
    //     }
}
    



    // // v.pb(0);
    // forn(i,n-1){
    //     sam+=((s[i]-'0')*10+(s[i+1]-'0'));
    //     if(s[i]=='1'){
    //         v.pb(i);
    //     }
    // }
    // // sam+=((s[n-2]-'0')*10+(s[n-1]-'0'));
    // // v.pb(n-1);
    // if(x==0){
    //     cout<<sam<<endl;
    //     return;
    // }
    // i=0;
    // int k=0;
    // int j=n-1;
    // // vl ans(n,0);
    // vl ans;
    // forn(i,n){
    //     ans.pb(s[i]-'0');
    // }
    // while(true){
    //    if(x<=0){
    //        break;
    //    }
    //    if(i==j || v.size()==0){
    //        break;
    //    }
    //    if(v[0]-i<=j-v[v.size()-1]){
    //        if(v[0]-i<=x){
    //            x-=v[0]-i;
    //            ans[i]=1;
    //            ans[v[0]]=0;
    //            i++;
    //            v.pop_front();
    //        }
    //        else{
    //            break;
    //        }
    //    }
    //    else{
    //         if(j-v[v.size()-1]<=x){
    //             x-=j-v[v.size()-1];
    //             ans[j]=1;
    //             ans[v[v.size()-1]]=0;
    //             j--;
    //             v.pop_back();
    //         }
    //         else{
    //             break;
    //         }
    //    }
    // }
    // forn(i,n-1){
    //     c+=((ans[i])*10+(ans[i+1]));
    // }
    // // c+=((ans[n-2])*10+(ans[n-1]));
    // // forn(i,n){
    // //     cout<<ans[i];
    // // }
    // cout<<c<<endl;
    // cout<<endl;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll tt;
    cin>>tt;
    while(tt--){
        solve();
    }

//solve();
    

    return 0;
}