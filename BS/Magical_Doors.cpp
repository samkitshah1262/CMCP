#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long int n,a,x,b,r,l,i,y,p,k;
    cin>>n;
    for(i=0;i<n;i++){
        int c=0;
        string s;
        cin>>s;
        if(s[0]=='0'){
            c++;
        }
        
        for(int j=0;j<s.size()-1;j++){
            if(s[j]!=s[j+1]){
                c++;
            }
        }

        cout<<c<<endl;
    }
}