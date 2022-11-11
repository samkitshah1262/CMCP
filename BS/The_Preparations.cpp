#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int n,a,x,b,r,l,i,y=0,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>k;
        x=b*k;
        if(x<a){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}