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
	int m,rb,cb,rd,cd,i,n,x,y,a,b,c,sam=0,t1,t2;
    cin>>n>>m>>rb>>cb>>rd>>cd;
    x=1;y=1;
    if(rb==rd || cb==cd){
            cout<<sam<<endl;
            return;
        }
    else{
        if(rb>rd && cb>cd){
            t1=rd+n;
            t2=cd+m;
            if(n==m && rb==cb && rd==cd){
                t1--;
                t2--;
            }
        //     while(true){
        //             if(rb==rd || cb==cd){
        //     cout<<sam<<endl;
        //     return;
        // }
        //         rb=rb+x;
        //         cb=cb+y;
        //         sam++;
        //         if(rb==1 || rb==n){
        //             x=-1;
        //         }
        //         if(cb==1 || cb==m){
        //             y=-1;
        //         }
        //     }
        // cout<<sam<<endl;
        // return;
        }
        else if(cb>cd && rb<rd){
            t2=cd+m;
            t1=rd-rb;
        }
        else if(rb>rd && cb<cd){
            t1=rd+n;
            t2=cd-cb;
        }
        else if(rb<rd && cb<cd){
            t1=rd-rb;
            t2=cd-cb;
        }
        sam=min(t1,t2);
        cout<<sam<<endl;
    }
    
    // while(true){

    //     rb=rb+x;
    //     cb=cb+y;
    //     sam++;
    //     if(rb==1 || rb==n){
    //         x=-1;
    //     }
    //     if(cb==1 || cb==m){
    //         y=-1;
    //     }
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