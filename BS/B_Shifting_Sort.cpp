#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long int n,a,b,r,l,i;
    string s;
    cin>>n;
    for(l=0;l<n;l++){
        long int x=0,y=0,k,sam=0;
        cin>>k;
        //cin>>s;
        vector<pair <int,int>> v;
        for(i=0;i<k;i++){
            cin>>a;
            v.push_back(make_pair(a,i+1));
        }
        sort(v.begin(),v.end());
        for(i=k-1;i>=0;i--){
            
        }
    }
}
