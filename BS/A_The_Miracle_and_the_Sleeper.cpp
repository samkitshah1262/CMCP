#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,x,b,r,l,i,y;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>l>>r;
        if(r%2==0){
        x=(r)/2;
        if(l==r){
            cout<<0<<endl;

        }
        else if(l>x+1){
            y=r%l;
            cout<<y<<endl;

        }
        else{
            cout<<x-1<<endl;
        }
        }
        else{
        x=(r-1)/2;
        if(l==r){
            cout<<0<<endl;

        }
        else if(l>x+1){
            y=r%l;
            cout<<y<<endl;

        }
        else{
            cout<<x<<endl;
        }
        }

    }
}