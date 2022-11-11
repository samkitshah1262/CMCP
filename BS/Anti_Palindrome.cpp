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
	long long int i,n,x,y,a,b,c1=0,c2=0,sam=0;
    string s;
    char ch;
    cin>>n;
    cin>>s;
    vi v(27,0);
    vector<char> vans;
    vector<pair<int,char>> vc;
    if(n%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        // forn(i,n){
        //     v[s[i]-96]++;
        //     //vc.pb(s[i]);
        // }
        // for(i=1;i<=27;i++){
        //     if(v[i]!=0){
        //         pair<int,char> p;
        //         p.F=v[i];
        //         p.S=char(i+96);
        //         vc.pb(p);
        //     }
        // }
        // forn(i,v.size()){
        //     if(v[i]>n/2){
        //         cout<<"NO"<<endl;
        //         return;
        //     }
        // }
        // sort(all(vc));
        // cout<<"YES"<<endl;
        // forn(i,vc.size()){
        //     forn(j,vc[i].F){
        //         vans.pb(vc[i].S);
        //     }
        // }
        // i=0;
        // int j=n/2;
        // while(vans[j]==vans[n/2]){
        //     swap(vans[n/2-1],vans[i]);
        //     i++;
        // }
        // forn(i,vans.size()){
        //     cout<<vans[i];
        // }
        // cout<<endl;
    //     vector<char> ans1;
    //     vector<char> ans2;
    //     forn(i,vc.size()){
    //         forn(j,vc[i].F/2){
    //             ans1.pb(vc[i].S);
    //             c1++;
    //         }
    //         for(int k=vc[i].F/2;k<vc[i].F;k++){
    //             if(c2==n/2){
    //                 ans1.pb(vc[i].S);
    //                 c1++;
    //             }
    //             else{
    //             ans2.pb(vc[i].S);
    //             c2++;
    //             }
    //         }
    //     }
    //     forn(i,ans1.size()){
    //         cout<<ans1[i];
    //     }
    //     forn(i,ans2.size()){
    //         cout<<ans2[i];
    //     }
    //     cout<<endl;
  
        vector<int> v(26,0) ;
        for(int i=0 ; i<s.size() ; i++) v[s[i]-'a']++ ;
        vector<pair<int,char>> vp ;
        for(int i=0 ; i<26 ; i++) vp.push_back({v[i],i+'a'}) ;
        sort(vp.rbegin(),vp.rend()) ;
        string tmp="" ;
        for(auto i : vp){
            int x = i.first ;
            while(x--)
                tmp+=i.second ;
        }
        int n = s.size() , idx=0  ;
        int l=0 , r=n-2 ;
        string ans(n,'?') ;
        bool ff=1 ;  
        while(l<r || (l==r && ans[l]=='?') ){
            if (ff)
                ans[l]=tmp[idx++] , l+=2 , ff=0 ;
            else    
                ans[r]=tmp[idx++] , r-=2 , ff=1 ;
        }
        l=1 ;
        r=n-1 ;
        ff=1 ;
        while(l<r || (l==r && ans[l]=='?') ){
            if (ff)
                ans[l]=tmp[idx++] , l+=2 , ff=0 ;
            else    
                ans[r]=tmp[idx++] , r-=2 , ff=1 ;
        }
        bool ok=1 ;
        for(int i=0 ; i<n/2 ; i++)
            if (ans[i]==ans[n-i-1]) ok=0 ;
        if (ok){
            cout<<"YES"<<endl ;
            cout<<ans<<endl ;
        }
        else{
            cout<<"NO"<<endl ;
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