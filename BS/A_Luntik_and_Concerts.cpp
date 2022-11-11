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
	long long int i,z,n,x,y,a,b,c,sam=0;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<0<<endl;
        return;
    }
    x=a%2;
    y=b%2;
    z=c%2;
    x=a+b*2+c*3;
    if(x%2==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
    return;
    if(x==y && y==z){
        cout<<0<<endl;
        return;
    }
    // else if(x==y && x!=z && x==0){
    //     cout<<1<<endl;
    //     return;
    // }
    // else if(x==y && x!=z && x==1){
    //     cout<<1<<endl;
    //     return;
    // }
    // else if(y==z && y!=x && y==1){
    //     cout<<1<<endl;
    //     return;
    // }
    // else if(y==z && y!=x && y==0){
    //     cout<<1<<endl;
    //     return;
    // }
    // else if(z==x && z!=y && z==1){
    //     cout<<2
    // }
    // if(a==b && a!=c){
    //     cout<<1<<endl;
    // }
    // else if(a!=b && a==c){
    //     cout<<0<<endl;
    // }
    // else if(b==c && b!=a){

    // }
    if(z==1){
        if(x==1 && y==0){
            cout<<0<<endl;
        }
        else if(x==0 && y==0){
            cout<<1<<endl;
        }
        else if(x==0 && y==1){
            cout<<1<<endl;
        }
    }
    else{
        // if(x==1){
        //     cout<<1<<endl;
        // }
        // else if(x==0 && y==1){
            
        // }
        //cout<<1<<endl;
        if(a==2*b){
            cout<<0<<endl;

        }
        else{
            cout<<1<<endl;
        }
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