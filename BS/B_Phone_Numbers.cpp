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


bool sortb(const pair<int,pair<int,string>> &a,const pair<int,pair<int,string>> &b){
    return (a.first < b.first);
}

void solve(){
	int i,n,x,y,a,b,c,sam=0;
    string s,s1,s2;
    cin>>n;
    vector<pair<int,pair<int,string>>> vt;
    vector<pair<int,pair<int,string>>> vg;
    vector<pair<int,pair<int,string>>> vp;
    forn(i,n){
        int ct=0,cg=0,cp=0;
        cin>>x>>s;
        forn(i,x){
            cin>>s1;

            vi v;
            forn(i,8){
                if(i==2 || i==5){
                    continue;
                }
                else{
                    v.pb(int(s1[i])-48);
                }
            }
            int temp1=0,temp2=0;
            forn(i,v.size()-1){
                if(v[i]>v[i+1]){
                    temp1++;
                }
                else if(v[i]==v[i+1]){
                    temp2++;
                }
            }
            if(temp1==5){
                cp++;
            }
            else if(temp2==5){
                ct++;
            }
            else{
                cg++;
            }
        }
        pair<int,pair<int,string>> pt;
        pair<int,pair<int,string>> pg;
        pair<int,pair<int,string>> pp;
        pt.F=ct; pt.S.F=i; pt.S.S=s;
        pg.F=cg; pg.S.F=i; pg.S.S=s;
        pp.F=cp; pp.S.F=i; pp.S.S=s;
        vt.pb(pt);
        vg.pb(pg);
        vp.pb(pp);
    }
    // sort(all(vt));
    // sort(all(vp));
    // sort(all(vg));
    sort(vt.begin(),vt.end(), sortb);
    sort(vg.begin(),vg.end(), sortb);
    sort(vp.begin(),vp.end(), sortb);
    c=vt[vt.size()-1].F;
    vector<pair<int,string>> vtemp1;
    vector<pair<int,string>> vtemp2;
    vector<pair<int,string>> vtemp3;
    forn(i,vt.size()){
        if(vt[i].F==c){
            vtemp1.pb(vt[i].S);
        }
    }
    c=vg[vg.size()-1].F;
    forn(i,vg.size()){
        if(vg[i].F==c){
            vtemp2.pb(vg[i].S);
        }
    }
    c=vp[vp.size()-1].F;
    forn(i,vp.size()){
        if(vp[i].F==c){
            vtemp3.pb(vp[i].S);
        }
    }
    sort(all(vtemp1));
    cout<< "If you want to call a taxi, you should call: ";
    forn(i,vtemp1.size()){
        if(i==vtemp1.size()-1){
            cout<<vtemp1[i].S<<"."<<endl;
        }
        else{
            cout<<vtemp1[i].S<<", ";
        }
    }
    sort(all(vtemp3));
    cout<<"If you want to order a pizza, you should call: ";
    forn(i,vtemp3.size()){
        if(i==vtemp3.size()-1){
            cout<<vtemp3[i].S<<"."<<endl;
        }
        else{
            cout<<vtemp3[i].S<<", ";
        }
    }
    sort(all(vtemp2));
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    forn(i,vtemp2.size()){
        if(i==vtemp2.size()-1){
            cout<<vtemp2[i].S<<"."<<endl;
        }
        else{
            cout<<vtemp2[i].S<<", ";
        }
    }

}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	

    solve();



	return 0;
}