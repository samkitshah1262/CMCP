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

vi vansf;

bool checkf(vi vc){
    forn(i,vc.size()){
        if(vc[i]==0){
            return false;
        }
    }
    return true;
}

void mex(vi v,vi vc,int n){
    if(n==0){
        return;
    }
    int x,a,flag=0;
    //vi v;
    //vi vc(n+1,0);
    forn(i,n){
        //cin>>a;
        vc[v[i]]=1;
        //v.pb(a);
    }
    forn(i,vc.size()){
        if(vc[i]==0){
            x=i;  
            vansf.pb(x);
            break;
        }
    }
    vi vct(x+1,0);
    forn(i,v.size()){
        if(checkf(vct)){
            //break;
            vi vtemp;
            copy(v.begin()+i,v.end(),back_inserter(vtemp));
            cout<<1<<endl;
            forn(j,vtemp.size()){
                cout<<vtemp[j]<<" vtemp j "<<x<<" for x "<<endl;
            }
            vi vcte(vtemp.size()+1,0);
            mex(vtemp,vcte,vtemp.size());
        }
        else{
            vct[v[i]]=1;
        }
    }
    
}


void solve(){
	int i=0,n,x,y,a,b,c,sam=0;
    cin>>n;
    vi v;
    vi vc(n+1,0);
    vi vct(n+1,0);
    vi vans;
    forn(i,n){
        cin>>a;
        vc[a]++;
        v.pb(a);
    }
    x=n+1;
    forn(i,vc.size()){
        if(vc[i]==0){
            x=i;
            break;
        }
    }
    set<int> s;
    //int tmex=0;
    // while(i<n){
    //     if(tmex==x){
    //         vans.pb(tmex);
    //         tmex=0;
    //         fill(vct.begin(),vct.end(),0);
    //     }
    //     if(vct[tmex]!=0){
    //         while(vct[tmex]!=0){
    //             tmex++;
    //         }
    //     }
    //     vct[v[i]]=1;
    //     i++;
    // }
    forn(i,n){
        if(s.size()==0){
            vans.pb(x);
            forn(j,x){
                s.insert(j);
            }
        }
        vc[v[i]]--;
        if(s.find(v[i])!=s.end()){
            s.erase(v[i]);
        }
        if(vc[v[i]]==0){
            x=min(x,v[i]);
        }
    }
    cout<<vans.size()<<endl;
    forn(i,vans.size()){
        cout<<vans[i]<<" ";;
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