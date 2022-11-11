#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s1,s2,s3,t,f;
    cin>>s1>>s2>>s3>>t;

    for(long unsigned int i=0;i<t.size();i++){
        if(t[i]=='1'){
            f=f+s1;
        }
        else if(t[i]=='2'){
            f=f+s2;
        }
        else if(t[i]=='3'){
            f=f+s3;
        }

    }
    cout<<f;
}