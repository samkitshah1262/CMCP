// #include <bits/stdc++.h>

// using namespace std;

// using ll = long long;
// using vi = vector<int>;
// using vvi = vector<vector<int>>;
// using vl = vector<ll>;
// using vvl = vector<vector<ll>>;
// using pi = pair<int, int>;
// using pl = pair<ll, ll>;


// #define all(x) begin(x), end(x)
// #define rall(x) rbegin(x), rend(x)
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define endl '\n'
// #define forn(i, n) for(ll i = 0; i < n; i++)
// #define fora(i, a, n) for(ll i = a; i < n; i++)
// #define inp(e) int e; cin >> e
// #define inpl(e) ll e; cin >> e
// #define inps(e) string e; cin >> e
// #define T int tt; cin >> tt; while(tt--)


// template<typename U>
// void print(U arr) {
// 	for(auto element: arr) {
// 		cout << element << " ";
// 	}
// 	cout << endl;
// }

// // read and write into files, rather than standard i/o
// void setup(string s) {
// 	freopen((s+".in").c_str(), "r", stdin);
// 	freopen((s+".out").c_str(), "w", stdout);
// }

// const int M = 1e9+7;


// void solve(){
// 	int i,n,x,m,y,a,b,c=0,sam=0,flag=0;
//     cin>>n>>m;
//     if(n==m){
//         cout<<0;
//         return;
//     }
//     int mat[n][n]={0};
//     forn(i,n){
//         forn(j,n){
//             mat[i][j]=0;
//             //cout<<mat[i][j]<<" ";
//         }
//         //cout<<endl;
//     }
//     forn(i,m){
//         cin>>x>>y;
//         mat[x-1][y-1]=1;
//         mat[y-1][x-1]=1;
//     }
//         forn(i,n){
//         forn(j,n){
//             //mat[i][j]=0;
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<"input"<<endl;
//     }

//     b=101;
//     while(b--){
//         vector<pair<int,int>> vtemp;
//         forn(j,n){
//             forn(i,n){
//                 if(mat[j][i]==1){
//                     c++;
//                     pair<int,int> p;
//                     // p.F=j;
//                     // p.S=i;
//                     // vtemp.pb(p);
//                     p.F=i;
//                     p.S=j;
//                     vtemp.pb(p);
//                 }
//             }
//             if(c==1){
//                 mat[vtemp[vtemp.size()-1].F][vtemp[vtemp.size()-1].S]=0;
//                 mat[vtemp[vtemp.size()-2].F][vtemp[vtemp.size()-2].S]=0;
//                 //sam++;
//                 flag=1;
//             }
//             c=0;
//         }
//         if(flag==1){
//             sam++;
//         }
//         flag=0;
//         // forn(l,vtemp.size()){
//         //     mat[vtemp[l].F][vtemp[l].S]=0;
//         // }
//         forn(i,n){
//             forn(j,n){
//                 cout<<mat[i][j]<<" ";
//             }
//             cout<<"afteritr"<<b<<endl;
//         }
//     }
//     cout<<sam;
// }

// int main(void) {
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
	
// 	// ll tt;
// 	// cin>>tt;
// 	// while(tt--){
// 	// 	solve();
// 	// }

//     solve();


// 	return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
bool a[110][110], u[110];
int main()
{
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;
        a[x-1][y-1]=a[y-1][x-1]=1;
    }
    int bad=1, c;
    for(c=0;bad;c++)
    {
        bad=0;
        for(int i=0;i<n;i++)
        {
            u[i]=0;
            int sum=0;
            for(int j=0;j<n;j++)sum+=a[i][j];
            if(sum==1)
            {
                bad++;
                u[i]=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(u[i])
            {
                for(int j=0;j<n;j++)
                    if(a[i][j])
                    {
                        a[i][j]=0;
                        a[j][i]=0;
                    }
            }
        }
    }
    cout<<c-1;
    return 0;
}

  	  	 			 		  	 		  	 		