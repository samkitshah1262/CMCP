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

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
    long int n,i,x,y,a,b,j,s,c;
    cin>>n;
    
    for(i=0;i<n;i++){
        vector<long int> v;
        cin>>a>>x;
        //cout<<a<<" "<<x<<endl;
        // c=0;
        // s=0;
        for(j=0;j<a;j++){
            cin>>y;
            //cout<<y<<endl;
            // if(y>c && y<s){
            //     c=y;
            // }
            // else if(y>s){
            //     c=s;
            //     s=y;s
            // }
        
            v.pb(y);
        }
        sort(all(v));
        sort(v.begin(),v.end());
        s=v[v.size()-1];    
        c=v[v.size()-2];
        b=c+s;
        int q=(x/b)*2;
        int r=x%b;
        if(r>s){
            q++;
            q++;
        }
        else if(r==0){
            int k=0;
        }
        else{
            q++;
        }
        cout<<q<<endl;
    }
        
        // //cout<<s<<" "<<c<<endl;
        // int sam=0;
        // int cnt=0;
        // while(true){
        //     //cout<<x<<" -x"<<endl;
        //     cnt++;
        //     if(x<=0){
        //         break;
        //     }
        //     if(sam==0 || sam==c){
        //         x=x-s;
        //         sam=s;
        //     }
        //     else{
        //         x=x-c;
        //         sam=c;
        //     }
        // }
        // cout<<cnt-1<<endl;
        // }
	return 0;
}