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


bool is(long double x){
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

bool pr(long long int n){
    int c=0;
    while (n % 2 == 0 && c<=3){
        c++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0 && c<=3){
            //cout<<2;
            c++;
            n = n/i;
        }
    }

    if (n > 2){
        c++;
        //cout<<c;
    }
    if(c>3){
        //cout<<c;
        return false;
        
    }    
    else{
        //cout<<c;
        return true;
    }
}
 

void solve(){
	long double x,y,a,b,c,sam=0;
    long long int n,i;
    cin>>n;
    if(n<4){
        cout<<"NO"<<endl;
        return;
    }
    if(n==4){
        cout<<"YES"<<endl;
        return;
    }
    if(n>4 && n%2==0){
        cout<<"NO"<<endl;
        return;
    }
    //x=sqrt(n);
    if(is(n)){
        i=n;
        bool see=pr(i);
        if(see){
            cout<<"YES"<<endl;
        }
        else{
            //cout<<1;
            cout<<"NO"<<endl;
        }
    }
    else{
        //cout<<1;
        cout<<"NO"<<endl;
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