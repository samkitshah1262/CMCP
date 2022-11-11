#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t,n; cin>>t; 
    while(t--&&cin>>n){
        int a[n],b[n],flag=1;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++) flag &=(a[i]<=b[i]&&(b[i]-b[(i+1)%n]<=1||a[i]==b[i]));
        cout<<(flag?"YES":"NO")<<endl;
    }
}