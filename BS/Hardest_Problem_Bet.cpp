#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,x,b,r,l,i,y,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a<b && a<c){
            cout<<"Draw"<<endl;
        }
        else if(b<a && b<c){
            cout<<"Bob"<<endl;
        }
        else if(c<a && c<b){
            cout<<"Alice"<<endl;
        }
        else{
            continue;
        }
    }
}
