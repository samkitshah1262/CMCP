#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,b,r,l,i;
    string s;
    cin>>n;
    for(l=0;l<n;l++){
        int x,y,k,sam=0;
        //cin>>k;
        cin>>x>>y;
        a=abs(x-y);
        if(a%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}