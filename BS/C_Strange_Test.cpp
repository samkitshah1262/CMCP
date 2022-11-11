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
	int i,n,x,y,a,b,c,sam=0,r,t,p,q;
    cin>>a>>b;
    // //int n = 10000;
    // string s1 = bitset<32>(a).to_string();
    // //int n = 10000;
    // string s2 = bitset<32>(b).to_string();
    // // cout<<s1<<endl<<s2<<endl;
    // // x = stoi(s1, 0, 2);
    // // y = stoi(s2, 0, 2);
    // // cout<<x<<endl<<y<<endl;
    // forn(i,s1.size()){
    //     if(s2[i]=='0' && s1[i]=='1'){
    //         string s1t="";
    //         string s2t="";
    //         for(int j=i+1;j<s1.size();j++){
    //             s1t+=s1[j];
    //             s2t+=s2[j];
    //         }
    //         r=int(pow(2,s1.size()-i));
    //         t=int(pow(2,s1.size()-i-1));
    //         p=r-stoi(s1t,0,2);
    //         q=t=stoi(s2t,0,2);
    //         sam=min(p,q)+1;
    //         cout<<sam<<endl;
    //         return;
    //     }
    // }
    // cout<<1<<endl;
    sam=b-a;
    for(i=a;i<b;i++){
        x=0;
        for(int j=21;j>=0;j--){
            if((b>>j)&1){
                x^=(1<<j);
            }
            else{
                if((i>>j)&1){
                    x^=(1<<j);
                    break;
                }
            }
        }
        sam=min(sam,i-a-b+(i|x)+1);
    }
    cout<<sam<<endl;
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