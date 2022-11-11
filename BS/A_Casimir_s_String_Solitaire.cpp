#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,a,b,r,l,i;
    string s;
    cin>>n;
    for(l=0;l<n;l++){
        int x=0,y=0,k,sam=0;
        //cin>>k;
        cin>>s;
        for(int j=0;j<s.size();j++){
            if(s[j]=='A'){
                x++;
            }
            else if(s[j]=='B'){
                y++;
            }
            else{
                sam++;
            }
        }
        if(y==x+sam){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
    