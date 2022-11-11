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

bool check(vector<pair<long long int,long long int>> v,int a){
    for(long long int j=0;j<a;j++){
        //cout<<v[j].S<<" "<<j<<endl;
        if(v[j].S!=j+1){
            return false;
        }
    }
    return true;
}


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
    long long int n,i,j,a,x,y,b,c,sam=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>x;
        vector<pair<long long int,long long int>> v;
        for(j=1;j<=a;j++){
            pair<long long int,long long int> p;
            cin>>y;
            p.F=y;
            p.S=j;
            v.pb(p);
        }
        //cout<<v[0].F<<" "<<v[0].S<<endl;
        sort(all(v));
        //for(j=1;j<=a;j++){
            // if(v[j].S+j<x){
            //     sam++;
            //     cout<<"NO"<<endl;
            //     break;
            // }
            if(check(v,a)){
                cout<<"YES"<<endl;
            }
            else{
                if(x>a/2){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
            }
        // //}
        // if(sam!=0){
        //     cout<<"YES"<<endl;
        // }
    }
	return 0;
}