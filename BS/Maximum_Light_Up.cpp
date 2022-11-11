#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long int n,a,x,b,r,l,i,y,p,c,k;
    cin>>n;
    //cout<<a;
    for(int j=0;j<n;j++){
        cin>>p>>a>>b>>c>>x>>y;
        int sam=0,st;
        r=a*y +c;
        l=a*x + b;
        if(l>r){
            sam=p/r;
            st=p- sam*r;
            sam= sam+ st/l;

        }
        else{
            sam=p/l;
            st=p- sam*l;
            sam= sam+ st/r;
        }
        cout<<sam<<endl;
    }
}