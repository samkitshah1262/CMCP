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
	long long int i,n,x,y,a=0,b=0,c,sam=0;
    cin>>x>>y>>a>>b;
    // string s1,s2,s3,s4;
    // //cin>>s1>>x>>s2>>y;
    
    // // forn(i,x){
    // //     s1=s1+"0";
    // // }
    // // forn(i,y){
    // //     s2=s2+"0";
    // // }
    // //cout<<s1<<" s1"<<endl;
    // if(s1.size()+x>s2.size()+y){
    //     //a=1;
    //     cout<<'>'<<endl;
    //     return;
    // }
    // else if(s1.size()+x<s2.size()+y){
    //     //b=1;
    //     cout<<'<'<<endl;
    //     return;
    // }
    // else{
        
    //     forn(i,min(s1.size(),s2.size())){
    //         if(int(s1[i])>int(s2[i])){
    //             a=1;
    //             break;
    //         }
    //         else if(int(s1[i])<int(s2[i])){
    //             b=1;
    //             break;
    //         }
    //         else{
    //             sam++;
    //         }
    //     }
    //     if(sam==min(s1.size(),s2.size())){
    //         cout<<'='<<endl;
    //         return;
    //     }
    //     if(a==1){
    //         cout<<'>'<<endl;
    //     }
    //     if(b==1){
    //         cout<<'<'<<endl;
    //     }
    // }
    // if(y>b){
    //     cout<<'>'<<endl;
    //     return;
    // }
    // else if(y==b){
    //     if(x==a){
    //         cout<<'='<<endl;
    //         return;
    //     }
    //     else if(x>a){
    //         cout<<'>'<<endl;
    //         return;
    //     }
    //     else{
    //         cout<<'<'<<endl;
    //         return;
    //     }
    // }
    // else{
    //     cout<<"<"<<endl;
    //     return;
    // }
    // n=x*pow(10,y);
    // c=a*pow(10,b);


    if(y>b){
        n=x*pow(10,y-b);
        c=a;
            if(n==c){
        cout<<'='<<endl;
    }
    else if(n>c){
        cout<<'>'<<endl;
    }
    else{
        cout<<'<'<<endl;
    }
    }
    else if(y<b){
        n=x;
        c=a*pow(10,b-y);
            if(n==c){
        cout<<'='<<endl;
    }
    else if(n>c){
        cout<<'>'<<endl;
    }
    else{
        cout<<'<'<<endl;
    }
    }
    else{
        n=x;
        c=a;
            if(n==c){
        cout<<'='<<endl;
    }
    else if(n>c){
        cout<<'>'<<endl;
    }
    else{
        cout<<'<'<<endl;
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