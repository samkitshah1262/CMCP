#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,x,b,r,l,i,y,c,k,s;
    cin>>x;
    //cout<<x;
    for(int j=0;j<x;j++){
        cin>>n>>k>>s;
        //cout<<n<<" "<<k<<" "<<s<<endl;
        c=1;
        vector<int> v;
        while(n>0){
            v.push_back(c);
            c=c+2;
            n--;
            
            //cout<<c<<endl;
        }
        b=0;
        for(i=0;i<v.size();i++){
            b=b+v[i];
            //cout<<v[i]<<" ";
        }

        //cout<<c<<endl;
        y=s-b;
        r=y/(k-1);
        cout<<r<<endl;
    }
}