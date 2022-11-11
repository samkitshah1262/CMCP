#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define int  long long
#define pii pair<int,int>
#define pll pair<long long,long long>
#define all(a) a.begin(),a.end()
#define vll vector <long long>
#define pb push_back
#define ff first
#define ss second
#define forl(i,a,b) for(int i = a;i<b;i++)

const int MD = 1e9 + 7;
const int MDL = 998244353;
const int INF = 1e9;
const int MX = 1e5 + 5;

template <class t>
void printarray(t arr,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
 
template <class t>
void printvector(vector <t>& v){
    int n = v.size();
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        forl(i,1,n+1){
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        if(n&1){
            cout<<"NO"<<"\n";
            continue;
        }
        bool flag = true;
        int p1 = 1;
        int p2 = 2;
        forl(i,n/2+1,n+1){
            if(arr[i]<=arr[p1] || arr[i]<=arr[p2]){
                // cout<<"i: "<<i<<" "<<p1<<" "<<p2<<"\n";
                flag = false;
                break;
            }
            p1+=1;
            p2+=1;
            if(p2>n/2){
                p2=1;
            }
        }
        if(!flag) cout<<"NO"<<"\n";
        else{
            cout<<"YES"<<"\n";
            forl(i,1,n/2+1){
                cout<<arr[i]<<" "<<arr[i+n/2]<<" ";
            }
            cout<<"\n";
        }
 
    }
    return 0;
}