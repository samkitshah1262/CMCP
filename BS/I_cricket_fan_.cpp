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
	long long int ns,st=2,i,n,x,y,a,b,c,sam=0,temp;
    cin>>n;
    vl v;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    vl vans(11,0);
    vector<bool> vb(11,false);
    a=0;b=1;
    forn(i,n){
        //st=st+v[i];
        if(i%6==0){
            //temp=st;
            if(st==a){
                st=b;
                ns=a;
            }
            else{
                st=a;
                ns=b;
            }
            //ns=temp;   
        }
        if(v[i]==-1){
            //vans.pb(st);
            //cout<<st<<" st out"<<endl;
            vb[st]=true;
            forn(k,vb.size()){
                if(vb[k]==false && k!=a && k!=b){
                    a=k;
                    st=a;
                    b=ns;
                    //cout<<st<<" st new"<<endl;
                    break;
                }
            }
            //st=0;
        }
        else if(v[i]%2==1){
            //st=st+v[i];
            //cout<<st<<" here"<<endl;
            vans[st]=vans[st]+v[i];
            //temp=a;
            // st=b;
            // ns=a;
            if(st==a){
                st=b;
                ns=a;
            }
            else{
                st=a;
                ns=b;
            }
        }
        else{
            // st++;
            // st++;
            vans[st]=vans[st]+v[i];
            //st=st+v[i];
        }
    }
    forn(i,vans.size()){
        cout<<vans[i]<<" ";
    }
    cout<<endl;
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