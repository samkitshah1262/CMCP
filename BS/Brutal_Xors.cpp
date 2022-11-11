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

// vi v;

// void bin(long long n)
//   {
//     long i;
//     cout << "0";
//     for (i = 1 << 30; i > 0; i = i / 2)
//     {
//       if((n & i) != 0)
//       {
//           v.pb(1);
//         //cout << "1";
//       }
//       else
//       {
//           v.pb(0);
//         //cout << "0";
//       }
//     }
//   }

unsigned ho2(unsigned x)
{
    // check for the set bits
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    //x |= x >> 32;
    //x |= x >> 64;
    //x |= x >> 128;
 
    // Then we remove all but the top bit by xor'ing the
    // string of 1's with that string of 1's shifted one to
    // the left, and we end up with just the one top bit
    // followed by 0's.
    return (x ^ (x >> 1))%M;
}


// long long int h2(long long int n)
// {
//     long long int res = 0;
//     for (int i=n; i>=1; i--)
//     {
//         // If i is a power of 2
//         if ((i & (i-1)) == 0)
//         {
//             res = i;
//             break;
//         }
//     }
//     return res%M;
// }

void solve(){
	long long int i,X,n,x,y,a,b,c,sam=0;
    cin>>X;
    
    set<int> s;
    if(X==1){
        cout<<1<<endl;
        return;
    }
    x=X%M;
    // int count = 0;
    // while (x) {
    //     count += x & 1;
    //     n >>= 1;
    // }
    // cout<<count<<endl;
    // bin(x);
    // cout<<int(pow(2,v.size()))<<endl;
    // if(x==x){
    //     for(i=1;i<x+1;i++){
    //         for(int j=1;j<x+1;j++){
    //             s.insert(i^j);
    //         }
    //     }
    //     cout<<s.size()<<endl;
    //     //cout<<ho2(x)<<" sam"<<endl;
    //     return;
    // }
    if(ho2(x)==x%M){
        if(X==2){
            cout<<2<<endl;
            return;
        }
        cout<<(2*x-1)%M<<endl;
    }
    else{
        cout<<(2*ho2(x))%M<<endl;
    }
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