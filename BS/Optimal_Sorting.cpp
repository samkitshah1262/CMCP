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
	long long int i,n,x,y,a,b,c,sam=0,flag=0;
    cin>>n;
    vl v;
    vl vtemp;
    forn(i,n){
        cin>>a;
        v.pb(a);
        vtemp.pb(a);
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    sort(all(vtemp));
    vl vin;
    forn(i,n){
        if(v[i]!=vtemp[i]){
            vin.pb(vtemp[i]);
        }
    }
    forn(i,vin.size()-1){
        if(i==0){
            c=i;
            continue;
        }
        if(vin[i+1]-vin[i]==1){
            //b=i+1;
            sam++;
        }
        else{
            //sam=sam+vin[b]-vin[c];
            c=i+1;
            
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

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int max_diff(ll arr[],ll l, ll r){
// 	ll mi = min(arr[l],arr[l+1]);
// 	ll ma = max(arr[l],arr[l+1]);
// 	for(int i=l+2;i<=r;i++){
// 		if(arr[i]<mi){
// 			mi = arr[i];
// 		}
// 		else if(arr[i]>ma){
// 			ma = arr[i];
// 		}
// 	}
// 	return ma-mi;
// }

// int main(){
//     int t;
// 	cin>>t;
// 	while(t--){
// 		ll n;
// 		cin>>n;
// 		ll arr[n];
// 		ll tmp[n];
// 		for(int i=0;i<n;i++){
// 			cin>>arr[i];
// 			tmp[i] = arr[i];
// 		}
// 		sort(tmp,tmp+n);
// 		int last;
// 			for(int i=n-1;i>=0;i--){
// 				if(arr[i]!=tmp[i]){
// 					last=i;break;
// 				}
// 			}
// 		//int min = 0,max = n-1;
// 		int tmp1[n];
// 		int x =0;
// 		for(int i=0;i<n;i++){
// 			if(arr[i]==tmp[i]){
// 				tmp1[x] = i;
// 				//cout<<i<<endl;
// 				x++;
// 			}
// 		}
// 		//cout<<x<<endl;
// 		if(x==n){
// 			cout<<0<<endl;
// 		}
// 		else if(x==0){
// 			cout<<tmp[n-1]-tmp[0]<<endl;
// 		}
// 		else{
// 			ll ans=0 ;
// 			if(tmp1[0]!=0){
// 				sort(arr,arr+tmp1[0]);
// 				ans+=arr[tmp1[0]-1]-arr[0];
// 			}
// 			// for(int i=0;i<n;i++){
// 			// 	cout<<arr[i]<<" ";

// 			// }
// 			// cout<<endl;
// 			// cout<<ans<<endl;
// 			for(int i=1;i<x;i++){
// 				if(tmp1[i]-tmp1[i-1] != 1){
// 					//cout<<ans<<endl;
// 					sort(arr+tmp1[i-1]+1,arr+tmp1[i]);
// 					ans+=arr[tmp1[i]-1]-arr[tmp1[i-1]+1];
// 					//cout<<ans<<endl;
// 				}
// 			}
			
// 			//cout<<ans<<endl;
// 			sort(arr+tmp1[x-1]+1,arr+n);
// 			// for(int i=0;i<n;i++){
// 			// 	cout<<arr[i]<<" ";

// 			// }
// 			// cout<<endl;
// 			//cout<<tmp1[x-1]+1<<endl;
// 			if(tmp1[x-1]+1 != n){
// 			ans+=arr[n-1]-arr[tmp1[x-1]+1];
// 			}
// 			//cout<<ans<<endl;
// 			int d=0;
// 			for(int i=0;i<n;i++){
// 				if(arr[i]!=tmp[i]){
// 					d++;break;
// 				}
// 			}
// 			//cout<<d<<" "<<ans<<endl;
// 			if(d==0){
// 				cout<<min(ans,arr[n-1]-arr[0])<<endl;
// 			}
// 			else{
// 				//cout<<last<<endl;
// 				cout<<tmp[last]-tmp[0]<<endl;
// 			}
// 		}


// 	}

// }