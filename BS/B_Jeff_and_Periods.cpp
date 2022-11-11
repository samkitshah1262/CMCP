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
// 	int i,n,x,y,a,b,c,sam=1,cd=0,pcd=0;
//     cin>>n;
//     vector<pi> v;
//     vector<pi> f;
//     forn(i,n){
//         pi p;
//         cin>>a;
//         p.F=a;
//         p.S=i;
//         v.pb(p);
//     }
//     sort(all(v));
//     forn(i,n){
//         if(v[i].F==v[i+1].F){
//             pi pt;
//             pcd=cd;
//             cd=v[i+1].S-v[i].S;
//             if(cd==pcd){
//                 continue;
//             }
//             else{

//             }
//             pt.F=v[i].F;
//             pt.S=v[i+1].S-v[i].S;
//             f.pb(pt);
//             sam++;
//         }
//         else if(v[i].F!=v[i+1].F && sam==1){
//             pi pt;
//             pt.F=v[i].F;
//             pt.S=0;
//             f.pb(pt);
//         }
//         else if(v[i]!=v[i+1] && sam!=1){
//             sam=1;
//             pi pt;
//             pt.F=v[i].F;
//             pt.S=0;
//             f.pb(pt);
//         }
//     }
//     vector<pi>fa;
//     forn(j,f.size()){
//         if(fa.size()==0){
//             fa.pb(f[j]);
//         }
//         if(f[j].F==f[j+1].F && fa[fa.size()-1].F!=f[j].F){
//             fa.pb(f[j]);
//             //continue;
//         }
//         else if(f[j].F!=f[j+1].F && fa[fa.size()-1].F!=f[j].F){
//             fa.pb(f[j]);
//             //cout<<f[j].F<<" "<<f[j].S<<endl;
//         }
//     }
//     cout<<fa.size()<<endl;
//     forn(i,fa.size()){
//         cout<<fa[i].F<<" "<<fa[i].S<<endl;
//     }
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
#include <cstring>
using namespace std;
//bruh
#define gc _getchar_nolock

const int maxN = 1e5 + 1;

int arr[maxN][2];
int res[maxN][2];

template <typename T> void fastInt(T &angka){
    T kali = 1; angka = 0; char input = gc();
    while(!isdigit(input)){if(input == '-') kali = -1; input = gc();}
    while(isdigit(input)) angka = (angka << 3) + (angka << 1) + input - 48, input = gc();
    angka *= kali;
}

/*void fastStr(string &str){
    char c = '0';
    while((c = gc()) && (c != -1 && c != '\n' && c != '\r' && c != ' ')){
        str += c;
    }
}*/

/*void printArr(){
    for(int i = 0; i < 26; ++i){
        cout << arr[i] << " ";
    }
    cout << '\n';
}*/

/*bool isPrime(ll number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(ll i = 3; (i * i) <= number; i += 2){
        if(number % i == 0 ) return false;
    }
    return true;

}*/

/*int binarySearch(int x, int n){
    int res = 0;
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (a[m] > x){
            r = m - 1;
        }
        else{
            l = m + 1;
            res = m + 1;
        }
    }
    return res;
}*/

//bool customSort(int arr1[2], int arr2[2]){
    //return min(arr1[0] * 2, arr1[1]) > min(arr2[0], arr2[1]);
//}

// 2 = 0, 3 = 1, 5 = 2, 7 = 3

void solve(){
    int n, inp;
    fastInt(n);
    for(int i = 0; i < n; ++i){
        fastInt(inp);
        if(arr[inp][0] == -2) continue;
        else if(arr[inp][0] == -1){
            arr[inp][0] = i;
        }else if(arr[inp][1] == -1){
            arr[inp][1] = i - arr[inp][0];
            arr[inp][0] = i;
        }else{
            if(i - arr[inp][0] != arr[inp][1]){
                arr[inp][0] = -2;
            }
            else{
                arr[inp][0] = i;
            }
        }
    }
    int sizeBrute = 0;
    for(int i = 0; i < maxN; ++i){
        if(arr[i][0] != -1 && arr[i][0] != -2){
            if(arr[i][1] == -1){
                res[sizeBrute][0] = i;
                res[sizeBrute][1] = 0;
            }else{
                res[sizeBrute][0] = i;
                res[sizeBrute][1] = arr[i][1];
            }
            sizeBrute++;
        }
    }
    cout << sizeBrute << '\n';
    for(int i = 0; i < sizeBrute; ++i){
        cout << res[i][0] << " " << res[i][1] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    memset(arr, -1, sizeof arr);
    solve();
}
