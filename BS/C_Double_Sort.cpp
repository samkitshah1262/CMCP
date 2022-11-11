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
	int i,n,x,y,a,b,c,sam=0;
    cin>>n;
    vi v1;
    vi v2;
    map<int,pair<int,int>> m;
    vector<pi> vans;
    forn(i,n){
        // pi p;
        // p.F=a;
        // v.pb(p);
        cin>>a;
        v1.pb(a);
    }
    forn(i,n){
        cin>>a;
        // v[i].S=a;
        v2.pb(a);
    }
    vi vt1=v1;
    vi vt2=v2;
    // for(i=1;i<101;i++){
    //     forn(j,n){
    //         if(v1[j]==i){
    //             pi p;
    //             p.F=v2[j];
    //             p.S=j;

    //         }
    //     }
    // }
    vector<vi> vs(101);
    forn(i,n){
        vs[v1[i]].pb(v2[i]);
    }
    // forn(i,vs.size()){
    //     if(vs[i].size()==0){
    //         cout<<"zero"<<endl;
    //     }
    //     else{
    //         forn(j,vs[i].size()){
    //             cout<<vs[i][j]<<" ";
    //         }
    //         cout<<endl;
    //         cout<<i<<endl;
    //     }
    // }
    int last=0;
    forn(i,vs.size()){
        if(vs[i].size()!=0){
            sort(all(vs[i]));
            if(last>vs[i][0]){
                cout<<-1<<endl;
                return;
            }

            last=vs[i][vs[i].size()-1];
        }
    }
    
    // sort(all(v));
    // forn(i,n-1){
    //     if(v[i].S>v[i+1].S){
    //         cout<<-1<<endl;
    //         return;
    //     }
    // }
    vi vc1=v1;
    sort(all(vc1));
    vector<bool> vb1(n,false);
    forn(i,n-1){
        for(int j=i+1;j<n;j++){
            if(v1[j]==vc1[i]){
                swap(v1[i],v1[j]);
                swap(v2[i],v2[j]);
                vb1[i]=true;
                if(i!=j){
                pi p;
                p.F=i+1;
                p.S=j+1;
                vans.pb(p);
                }
                // cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
    vi vc2=v2;
    sort(all(vc2));
    vector<bool> vb2(n,false);
    forn(i,n){
        for(int j=i+1;j<n;j++){
            if(v2[j]==vc2[i]){
                swap(v2[i],v2[j]);
                vb2[i]=true;
                if(i!=j){
                pi p;
                p.F=i+1;
                p.S=j+1;
                vans.pb(p);
                }
                // cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
    // cout<<vans.size()<<endl;
    forn(i,vans.size()){
        swap(vt1[vans[i].F],vt1[vans[i].S]);
        swap(vt2[vans[i].F],vt2[vans[i].S]);
        // cout<<vans[i].F<<" "<<vans[i].S<<endl;
    }
    forn(i,vt1.size()){
        cout<<vt1[i]<<" "<<vt2[i]<<endl;
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