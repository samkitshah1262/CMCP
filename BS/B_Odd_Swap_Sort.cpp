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
	ll i,n,x,y,a,b,c,same=0,samo=0,flag=0;
    cin>>n;
    vl v;
    vl v2;
    forn(i,n){
        cin>>a;
        if(a%2==0){
            v.pb(a);
        }
        else{
            v2.pb(a);
        }
    }
    if(v.size()!=0){
    forn(i,v.size()-1){
        if(v[i]>v[i+1]){
            cout<<"No"<<endl;
            return;
        }
    }
    }
    if(v2.size()!=0){
    forn(i,v2.size()-1){
        if(v2[i]>v2[i+1]){
            cout<<"No"<<endl;
            return;
        }
    }
    }
    cout<<"Yes"<<endl;
    return;
    // sort(all(v2));
    // forn(i,v.size()-1){
    //     if(flag==v2[i]){
    //         flag=0;
    //     }
    //     if(flag!=0 && v[i]>v[i+1]){
    //             cout<<"No"<<endl;
    //             return;
    //     }
    //     if(v[i]>v[i+1]){
    //         if((v[i]+v[i+1])%2==1){
    //             // swap(v[i],v[i+1]);
    //             // same++;
    //                 flag=v[i];
    //         }
    //         // else if((v[i]+v[i+1])%2==1 && v[i]%2!=0){
    //         //     samo++;
    //         // }
    //         else{
    //             cout<<"No"<<endl;
    //             return;
    //         }
    //     }
  
    // }
    // // if(same+samo>2){
    // //     cout<<"No"<<endl;
    // //     return;
    // // }
    // // else{
    // //     forn(i,v.size()-1){
    // //     if(v[i]>v[i+1]){
    // //         if((v[i]+v[i+1])%2==1){
    // //             swap(v[i],v[i+1]);
    // //             // sam++;
    // //         }
    // //         else{
    // //             cout<<"No"<<endl;
    // //             return;
    // //         }
    // //     }
    // // }
    // cout<<"Yes"<<endl;
    // return;
    // }
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