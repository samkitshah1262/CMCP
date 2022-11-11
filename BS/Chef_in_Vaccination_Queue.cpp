#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int n,a,x,b,r,l,i,y,p,k;
    cin>>n;
    for(i=0;i<n;i++){
        int c=0;
        cin>>k>>p>>x>>y;
        vector<int> v;
        for(int j=0;j<k;j++){
            cin>>a;
            v.push_back(a);
            if(j<p){
                if(a==1){
                    c=c+y;
                }
                else{
                    c=c+x;
                }
            }
        }
        cout<<c<<endl;
    }
}